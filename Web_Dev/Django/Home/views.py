from django.shortcuts import render,HttpResponse

# Create your views here.

def home_page(request):
    # return HttpResponse('This is ProtoS Home page')
    return render(request, 'home_page.html')

def services_page(request):
    return render(request, 'projects_page.html')

def links_page(request):
    return render(request, 'links_page.html')

def about_page(request):
    return render(request, 'about_page.html')

def contact_page(request):
    return render(request, 'contact_page.html')
