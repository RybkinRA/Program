
#include <iostream>
#include "metod.cpp"
#include <string>
#include <iomanip>
#include "windows.h"

using namespace std;

int main()
{
	//ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	HWND hWnd = GetForegroundWindow();
	ShowWindow(hWnd, SW_SHOWMAXIMIZED);
	setlocale(LC_ALL, "rus");
	const int w = 20;
	double maxv = 0;
	double xi = 0;
	bool flag = true;
	int f;
	cout.setf(ios::left);

	double control;
	double h;
	int n;
	Point p0;
	vector<Point> points;
	while (flag)
	{
		maxv = 0;
		cout << "Введите начальный шаг: ";
		cin >> (h);
		cout << endl;
		cout << "Введите количество шагов: ";
		cin >> (n);
		cout << endl;
		double eps;
		cout << "Введите контроль погрешности: ";
		cin >> eps;
		cout << endl;
		cout << "Введите контроль выхода на 0: ";
		cin >> control;
		cout << endl;

		p0.v1 = 7;
		p0.v2 = 13;
		p0.u1 = 7;
		p0.u2 = 13;
		p0.h = h;
		int c1 = 0, c2 = 0;

		points = StartMethodBasic(n, p0, eps,control);

		for (auto& i : points)
		{
			if (fabs(i.er) > maxv)
			{
				maxv = fabs(i.er);
				xi = i.xn;
			}
		}
		for (int i = 1; i < points.size(); i++)
		{
			if (points[i].h == points[i - 1].h)
				continue;
			if (points[i].h > points[i - 1].h)
				c1++;
			else
				c2++;
		}

		cout << std::setw(w) << "i" << std::setw(w) << "h" << std::setw(w) << "Xn" << std::setw(w) << "V1" << std::setw(w) << "V2"
			<< std::setw(w) << "U1" << std::setw(w) << "U2" << std::setw(w) << "Глоб погрешность" << std::setw(w) << "Погрешность 1 комп" << std::setw(w) << "Погрешность 2 комп" << endl;
		for (int i = 0; i < points.size(); i++)
		{
			cout << std::setw(w) << points[i].num << std::setw(w) << points[i].h << std::setw(w)
				<< points[i].xn << std::setw(w) << points[i].v1 << std::setw(w) << std::setw(w)
				<< points[i].v2 << std::setw(w) << points[i].u1 << std::setw(w) << points[i].u2 << std::setw(w)
				<< points[i].er << std::setw(w) << points[i].er1 << std::setw(w) << points[i].er2 << endl;
		}

		/*cout << std::setw(w) << points[n - 1].num << std::setw(w) << points[n - 1].h << std::setw(w)
			<< points[n - 1].xn << std::setw(w) << points[n - 1].v1 << std::setw(w) << std::setw(w)
			<< points[n - 1].v2 << std::setw(w) << points[n - 1].u1 << std::setw(w) << points[n - 1].u2 << std::setw(w)
			<< points[n - 1].er << std::setw(w) << points[n - 1].er1 << std::setw(w) << points[n - 1].er2 << endl;*/

		cout << endl << "Справка" << endl;
		cout << "Конечный x: " << points[points.size() - 1].xn << endl;
		cout << "Максимальная погрешность: " << maxv << " достигается при х: " << xi << endl;
		cout << "Число делений шага: " << c2 << endl;
		cout << "Число удвоений шага:" << c1 << endl;
		cout << "Для повторного вычисления введите 1, для выхода любую другую цифру" << endl;
		cin.clear();
		cout << "Ваш выбор: ";
		cin >> f;
		if (f == 1)
			system("cls");
		else
			flag = false;
	}
}


