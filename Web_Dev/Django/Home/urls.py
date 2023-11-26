from django.contrib import admin
from django.urls import path
from Home import views

admin.site.site_header = "ProtoS Admin"
admin.site.site_title = "ProtoS Admin Portal"
admin.site.index_title = "Welcome to ProtoS Researcher Portal"

urlpatterns = [
    path('',views.home_page,name='home'),
    path('about',views.about_page,name='about'),
    path('services',views.services_page,name='services'),
    path('contact',views.contact_page,name='contact'),
    path('links',views.links_page,name='links')
]