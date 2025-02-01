from django.db import models
from django.contrib.auth.models import User

class Doctor(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE)
    first_name = models.CharField(max_length=100, blank=True, null=True)  # Add first name
    last_name = models.CharField(max_length=100, blank=True, null=True)   # Add last name
    specialization = models.CharField(max_length=100)
    contact_no = models.CharField(max_length=15, blank=True, null=True)
    image = models.ImageField(upload_to='doctor_images/', blank=True, null=True)
    address = models.CharField(max_length=255, blank=True, null=True)

    def __str__(self):
        return self.user.username

class Patient(models.Model):#-
    user = models.OneToOneField(User, on_delete=models.CASCADE)#-
    age = models.IntegerField(null=True, blank=True) 
    first_name = models.CharField(max_length=100, blank=True, null=True)  
    last_name = models.CharField(max_length=100, blank=True, null=True)  
    contact_no = models.CharField(max_length=15, blank=True, null=True)
    address = models.CharField(max_length=255, blank=True, null=True)

    

class Appointment(models.Model):
    STATUS_CHOICES = [
        ('scheduled', 'Scheduled'),
        ('completed', 'Completed'),
        ('canceled', 'Canceled'),
        ('rescheduled', 'Rescheduled'),
        ('incomplete', 'Incomplete'),
    ]

    patient = models.ForeignKey(Patient, on_delete=models.CASCADE)
    doctor = models.ForeignKey(Doctor, on_delete=models.CASCADE)
    appointment_time = models.DateTimeField()
    status = models.CharField(max_length=20, choices=STATUS_CHOICES, default='incomplete')

    def __str__(self):
        return f"{self.patient} - {self.doctor} on {self.appointment_time}"
