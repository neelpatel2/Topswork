from django.shortcuts import render, redirect
from django.contrib.auth.decorators import login_required
from django.contrib.auth import authenticate, login
from django.contrib.auth import authenticate, login
from django.shortcuts import render
from .models import Doctor, Patient,Appointment
from django.contrib.auth.models import User
from django.utils import timezone
from datetime import datetime
from django.contrib.auth import logout


@login_required
def book_appointment(request):
    patient = Patient.objects.get(user=request.user)  # Get the logged-in patient

    # Get all available doctors
    doctors = Doctor.objects.all()

    if request.method == 'POST':
        doctor_id = request.POST.get('doctor_id')
        appointment_time = request.POST.get('appointment_time')

        # Ensure the doctor and appointment time are provided
        if doctor_id and appointment_time:
            try:
                doctor = Doctor.objects.get(id=doctor_id)
                appointment_time = timezone.make_aware(datetime.strptime(appointment_time, '%Y-%m-%dT%H:%M'))

                # Create the appointment
                Appointment.objects.create(patient=patient, doctor=doctor, appointment_time=appointment_time)

                return redirect('appointment_success')  # Redirect to a success page

            except Doctor.DoesNotExist:
                return render(request, 'users/book_appointment.html', {'error': 'Doctor not found!', 'doctors': doctors})
            except ValueError:
                return render(request, 'users/book_appointment.html', {'error': 'Invalid date format!', 'doctors': doctors})
        else:
            return render(request, 'users/book_appointment.html', {'error': 'All fields are required!', 'doctors': doctors})

    return render(request, 'users/book_appointment.html', {'doctors': doctors})


@login_required
def dashboard(request):
    if request.user.is_authenticated:
        try:
            doctor = Doctor.objects.get(user=request.user)
            appointments = Appointment.objects.filter(doctor=doctor)
            return render(request, 'users/doctor_dashboard.html', {
                'doctor': doctor, 
                'appointments': appointments,
                'first_name': doctor.user.first_name,
                'last_name': doctor.user.last_name,
                'address': doctor.address,
                'specialization': doctor.specialization,
                'contact_no': doctor.contact_no,
                'image': doctor.image
            })
        except Doctor.DoesNotExist:
            try:
                patient = Patient.objects.get(user=request.user)
                appointments = Appointment.objects.filter(patient=patient)
                return render(request, 'users/patient_dashboard.html', {
                    'patient': patient,
                    'appointments': appointments,
                    'first_name': patient.first_name,
                    'last_name': patient.last_name,
                    'age': patient.age,
                    'contact_no': patient.contact_no,
                    'address': patient.address
                })
            except Patient.DoesNotExist:
                return redirect('login')
    return redirect('login')

def login_user(request):
    if request.method == 'POST':
        username = request.POST['username']
        password = request.POST['password']
        user = authenticate(request, username=username, password=password)
        if user is not None:
            login(request, user)
            return redirect('dashboard')
    return render(request, 'users/login.html')

def register(request):
    if request.method == 'POST':
        email = request.POST.get('email')
        password = request.POST.get('password')
        role = request.POST.get('role')
        age = request.POST.get('age')  # Get age directly here

        # Check if the email already exists
        if User.objects.filter(username=email).exists():
            return render(request, 'users/register.html', {'error': 'Email already exists!'})

        # Create user object
        if email and password and role:
            user = User.objects.create_user(username=email, email=email, password=password)

            # If role is 'doctor', create a Doctor object
            if role == 'doctor':
                Doctor.objects.create(user=user)

            # If role is 'patient', create a Patient object and require age
            if role == 'patient':
                if age:  # Check if age is provided
                    try:
                        age = int(age)  # Ensure age is an integer
                        Patient.objects.create(user=user, age=age)
                    except ValueError:
                        return render(request, 'users/register.html', {'error': 'Age must be a valid number!'})
                else:
                    return render(request, 'users/register.html', {'error': 'Age is required for patients!'})

            # Redirect to login page after successful registration
            return redirect('login')
        else:
            return render(request, 'users/register.html', {'error': 'All fields are required!'})
    
    return render(request, 'users/register.html')

@login_required
def appointment_success(request):
    return render(request, 'users/appointment_success.html')
@login_required
def manage_appointments(request):
    try:
        doctor = Doctor.objects.get(user=request.user)
    except Doctor.DoesNotExist:
        return redirect('dashboard')  # Redirect if the user is not a doctor

    # Get all appointments for this doctor
    appointments = Appointment.objects.filter(doctor=doctor)

    # Pass the STATUS_CHOICES to the template
    status_choices = Appointment.STATUS_CHOICES

    if request.method == 'POST':
        appointment_id = request.POST.get('appointment_id')
        status = request.POST.get('status')

        # Ensure the status and appointment are provided
        if appointment_id and status:
            try:
                appointment = Appointment.objects.get(id=appointment_id, doctor=doctor)
                appointment.status = status
                appointment.save()
                return redirect('manage_appointments')  # Redirect to refresh the appointment list
            except Appointment.DoesNotExist:
                return render(request, 'users/manage_appointments.html', {'error': 'Appointment not found!', 'appointments': appointments, 'status_choices': status_choices})
        else:
            return render(request, 'users/manage_appointments.html', {'error': 'All fields are required!', 'appointments': appointments, 'status_choices': status_choices})

    return render(request, 'users/manage_appointments.html', {'appointments': appointments, 'status_choices': status_choices})

@login_required
def edit_doctor_profile(request):
    try:
        doctor = Doctor.objects.get(user=request.user)
    except Doctor.DoesNotExist:
        return redirect('dashboard')  # Redirect if the user is not a doctor

    if request.method == 'POST':
        # Get data from the form
        doctor.first_name = request.POST.get('first_name')
        doctor.last_name = request.POST.get('last_name')
        doctor.specialization = request.POST.get('specialization')
        doctor.contact_no = request.POST.get('contact_no')
        doctor.address = request.POST.get('address')
        
        # Handle image upload
        if request.FILES.get('image'):
            doctor.image = request.FILES.get('image')

        doctor.save()  # Save changes to the Doctor model
        return redirect('dashboard')  # Redirect back to the doctor dashboard after saving
    return render(request, 'users/edit_doctor_profile.html', {'doctor': doctor})

def user_logout(request):
    logout(request)  # Log out the user
    return redirect('login')

def edit_profile(request):       # Edit Profile for the patient
    if request.user.is_authenticated:
        patient = Patient.objects.get(user=request.user)
        if request.method == 'POST':
            patient.first_name = request.POST.get('first_name')
            patient.last_name = request.POST.get('last_name')
            patient.age = request.POST.get('age')
            patient.contact_no = request.POST.get('contact_no')
            patient.address = request.POST.get('address')
            patient.save()
            return redirect('dashboard')  # Redirect after saving changes

        return render(request, 'users/edit_profile.html', {'patient': patient})
    return redirect('login')
