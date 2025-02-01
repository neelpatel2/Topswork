from django.urls import path
from . import views
from django.conf import settings
from django.conf.urls.static import static


urlpatterns = [
    path('', views.register, name='register'),
    path('login/', views.login_user, name='login'),
    path('dashboard/', views.dashboard, name='dashboard'),
    path('book_appointment/', views.book_appointment, name='book_appointment'),
    path('appointment_success/', views.appointment_success, name='appointment_success'),
    path('manage_appointments/', views.manage_appointments, name='manage_appointments'),
    path('doctor/edit-profile/', views.edit_doctor_profile, name='edit_doctor_profile'),
    path('logout/', views.user_logout, name='logout'),
    path('edit-profile/', views.edit_profile, name='edit_profile'),


]
if settings.DEBUG:
    urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)