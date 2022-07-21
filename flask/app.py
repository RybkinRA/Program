from flask import Flask, render_template, redirect, url_for, request
import jinja2
import numpy as np
import sqlite3
from flask_sqlalchemy import SQLAlchemy

app = Flask(__name__)
##Настройка
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///test.db'
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False


db = SQLAlchemy(app)
##

##Создание таблицы
class Matrix(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    mainMatrix = db.Column(db.String(500))
    separator = db.Column(db.Integer)
    matrix1 = db.Column(db.String(500))
    matrix2 = db.Column(db.String(500))
##

row = 10
colum = 10
data = list()
select = 0


@app.route('/')
def index():
    return render_template("index.html")


@app.route('/select', methods=['post', 'get'])
def select():
    global row
    global colum
    if request.method == 'POST':
        row = int(request.form['size_rows'])
        colum = int(request.form['size_column'])
    r = []
    c = []
    for i in range(1, row + 1):
        r.append(str(i))
    for j in range(1, colum + 1):
        c.append(str(j))
    return render_template("select.html", rows=r, column=c, size=row)


@app.route('/mov', methods=['post', 'get'])
def mov():
    global data
    global select
    data.clear()
    d = []
    for i in range(1, row + 1):
        for j in range(1, colum + 1):
            d.append(request.form[str(i) + "_" + str(j)])
        data.append(d)
        d = []
    select = int(request.form['select'])
    return redirect(url_for('res'))


@app.route('/res', methods=['post', 'get'])
def res():
    global data
    global select
    print(data)
    t1 = []
    t2 = []
    for i in range(0, select):
        t1.append(data[i])
    for j in range(select, row):
        t2.append(data[j])
    print(t1)
    print(t2)
    s1=''
    s2=''
    s3=''
    for j in data:
        for i in j:
            s1+=str(i)+';'
        s1+='||'
    for j in t1:
        for i in j:
            s2 += str(i) + ';'
        s2+='||'
    for j in t2:
        for i in j:
            s3 += str(i) + ';'
        s3 += '||'
    print(s1)
    print(s2)
    print(s3)
    ##Добавление в базу данных
    try:
        matrix = Matrix(mainMatrix=s1, separator=select, matrix1=s2, matrix2=s3)
        db.session.add(matrix)
        db.session.flush()
        db.session.commit()
    except:
        db.session.rollback()
        print("Ошибка добовления в базу данных")
    return render_template("res.html", mat1=t1, mat2=t2)


if __name__ == "__main__":
    app.run(debug=True)
