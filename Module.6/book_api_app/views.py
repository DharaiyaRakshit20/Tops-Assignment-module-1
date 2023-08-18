from django.shortcuts import render
from .models import *
from rest_framework.decorators import api_view
from rest_framework.response import Response
from .models import *
from .serializers import BookSerializer
# Create your views here.


def home(request):
    if request.method == "POST":
        Book.objects.create(
            Title=request.POST["title"],
            Author=request.POST["author"],
            Isbn=request.POST["isbn"],
            Publisher=request.POST["publisher"]
        )
        return render(request,"form.html",{"msg":"Your Data saved..."})
    else:
        return render(request,"form.html")
    
@api_view(['GET'])
def display(request):
    all_data=Book.objects.all()
    serial = BookSerializer(all_data,many=True)
    return Response(serial.data)

@api_view(['GET'])
def update(request,pk,t,a,i,p):
    one_data=Book.objects.get(id=pk)
    one_data.Title=t
    one_data.Author=a
    one_data.Isbn=i
    one_data.Publisher=p
    serial=BookSerializer(one_data)
    return Response(serial.data)

@api_view(['GET'])
def delete(request,pk):
    delete_data=Book.objects.get(id=pk)
    delete_data.delete()
    delete_data.save()
    serial=BookSerializer(delete_data,many=True)
    return Response(serial.data)