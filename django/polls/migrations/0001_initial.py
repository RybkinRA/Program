# Generated by Django 3.2.3 on 2021-05-24 17:30

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Matrix',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('mainMatrix', models.CharField(max_length=500)),
                ('separator', models.IntegerField()),
                ('matrix1', models.CharField(max_length=500)),
                ('matrix2', models.CharField(max_length=500)),
            ],
        ),
    ]