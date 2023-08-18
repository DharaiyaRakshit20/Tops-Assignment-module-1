from django.db import models

# Create your models here.

class Book(models.Model):
    Title = models.CharField(max_length=200)
    Author = models.CharField(max_length=100)
    Isbn = models.CharField(max_length=13)
    Publisher = models.CharField(max_length=100)

    def __str__(self):
        return self.Title