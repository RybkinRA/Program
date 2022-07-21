from django.db import models


class Matrix(models.Model):
    mainMatrix = models.CharField(max_length=500)
    separator = models.IntegerField()
    matrix1 = models.CharField(max_length=500)
    matrix2 = models.CharField(max_length=500)

