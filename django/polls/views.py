from django.shortcuts import render
from django.http import HttpResponse

from .forms import MyForm
from .models import Matrix

def index(request):
    s1 = ''
    s2 = ''
    s3 = ''
    select = 1
    if request.method == 'POST':
        print(request.POST)
        form = MyForm(request.POST)
        # p11 = int(form.data['p11'])
        # p12 = int(form.data['p12'])
        # p13 = int(form.data['p13'])
        # p21 = int(form.data['p21'])
        # p22 = int(form.data['p22'])
        # p23 = int(form.data['p23'])
        # p31 = int(form.data['p31'])
        # p32 = int(form.data['p32'])
        # p33 = int(form.data['p33'])
        # select = int(form.data['sep'])
        #
        # data=[[],[],[]]
        # data[0].append(p11)
        # data[0].append(p12)
        # data[0].append(p13)
        # data[1].append(p21)
        # data[1].append(p22)
        # data[1].append(p23)
        # data[2].append(p31)
        # data[2].append(p32)
        # data[2].append(p33)
        #
        # t1 = []
        # t2 = []
        # for i in range(0, select):
        #     t1.append(data[i])
        # for j in range(select, 3):
        #     t2.append(data[j])
        # print(t1)
        # print(t2)
        # s1 = ''
        # s2 = ''
        # s3 = ''
        # for j in data:
        #     for i in j:
        #         s1 += str(i) + ';'
        #     s1 += '||'
        # for j in t1:
        #     for i in j:
        #         s2 += str(i) + ';'
        #     s2 += '||'
        # for j in t2:
        #     for i in j:
        #         s3 += str(i) + ';'
        #     s3 += '||'
        # Matt = Matrix(mainMatrix=s1, separator=select, matrix1=s2, matrix2=s3)
        # Matt.save()
        print(form.data['p11'])
        print(form.data['p12'])
        print(form.data['p13'])
        print(form.data['f'])
    form = MyForm()
    print(form)
    # L = Matrix.objects.all()
    L = []
    return render(request,'index.html',{'L':L,'form':form})