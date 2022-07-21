
#include <iostream>
#include <cmath>
#include <vector>

// вспомогательная структура, которая описывает точку

struct DataPoints
{
	int num;
	double xn, vn; 
	double v2, v15; // v удвоенное и v+1/2
	double S, er;
	double h;
	int sub; // Признак изменения шага
	DataPoints()
	{
		num = 0;
		sub = xn = vn = v2 = v15 = S = er = 0;
		h = 0.1;
	}
};

inline double FTEST(double x, double v)
{
	return v;
}


// Правая часть ДУ

inline double FBASIC(double x, double v, double a, double s)
{

	const double g = 9.8;
	const double pi = 3.14159265;
	return(-0.6 * s * sqrt(2 * g) * (1 / pow(tan(0.5 * a), 2)) * (1 / pi) * (1 / pow(sqrt(v), 3)));
}

inline double RK4_Test( double Xn, double Vn, double hn)
{
	double V; 
	double k1, k2, k3, k4;
    
	k1 = FTEST(Xn, Vn);
	k2 = FTEST(Xn + (hn / 2.0), Vn + (hn / 2.0) * k1);
	k3 = FTEST(Xn + (hn / 2.0), Vn + (hn / 2.0) * k2);
	k4 = FTEST(Xn + hn, Vn + hn * k3);
	
	V = Vn + (hn / 6.0) * (k1 + (2.0 * k2) + (2.0 * k3) + k4);
	
	return V;
}

//Метод РК 4-ого порядка

inline double RK4_BASIC(double Xn, double Vn, double hn, double a, double s)
{
	double V; 
	double k1, k2, k3, k4;

	k1 = FBASIC(Xn, Vn, a, s);
	k2 = FBASIC(Xn + (hn / 2.0), Vn + (hn / 2.0) * k1,a,s);
	k3 = FBASIC(Xn + (hn / 2.0), Vn + (hn / 2.0) * k2, a, s);
	k4 = FBASIC(Xn + hn, Vn + hn * k3, a, s);

	V = Vn + (hn / 6.0) * (k1 + (2.0 * k2) + (2.0 * k3) + k4);

	return V;
}

//inline std::vector<DataPoint> StartMethodTest(int n, DataPoint p0)
//{
//	std::vector<DataPoint> points;
//	points.push_back(p0);
//	double h = p0.h;
//	int i = 1;
//	double xtmp;
//	DataPoint p;
//	p.er=p0.er;
//	double c = p0.vn - exp(p0.xn);
//	while (i < n + 1)
//	{
//		p.num = i;
//		p.h = h;
//		p.xn = points[i - 1].xn + h;
//		p.vn = RK4_Test(points[i - 1].xn, points[i - 1].vn, h);
//		xtmp = p.xn - h / 2;
//		p.v15 = RK4_Test(points[i - 1].xn, points[i - 1].vn, h / 2.0);
//		p.v2 = RK4_Test(xtmp, p.v15, h / 2.0);
//		p.S = (p.vn - p.v2) / 15.0;
//		if (abs(p.S) > points[i - 1].er)
//		{
//			h = h / 2.0;
//			continue;
//		}
//		if (abs(p.S) < points[i - 1].er / 32.0)
//		{
//			h = 2.0*h;
//			p.u = exp(p.xn)+c;
//			p.Gerror = p.u - p.vn;
//			points.push_back(p);
//			i++;
//			continue;
//		}
//		p.u = exp(p.xn)+c;
//		p.Gerror = p.u - p.vn;
//		points.push_back(p);
//		i++;
//	}
//	return points;
//}

//двойной счет с половиным шагом 
//функция возвращает результат вычислений в виде вектора
//структур, описывающих точки.

inline std::vector<DataPoints> StartMethodBasic(int n,double controler, double border, DataPoints p0, double a, double s)
{
	std::vector<DataPoints> points;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	double xtmp;
	DataPoints p;
	while (i < n + 1)
	{
		if (points[i - 1].vn >= 0 && points[i - 1].vn <= border) 
			break;
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		p.vn = RK4_BASIC(points[i - 1].xn, points[i - 1].vn, h,a,s);
		xtmp = p.xn - h / 2.0;
		p.v15 = RK4_BASIC(points[i - 1].xn, points[i - 1].vn, h / 2.0,a,s);
		p.v2 = RK4_BASIC(xtmp, p.v15, h / 2.0,a,s);
		if (std::isnan(p.vn) || std::isnan(p.v15) || std::isnan(p.v2))
		{
			p.sub = -2;
			h = h / 2;
			continue;
		}
		p.S = (p.vn - p.v2) / 15.0;
		p.er = p.S * 16;
		if (abs(p.S) > controler)
		{
			p.sub = -2;
			h = h / 2.0;
			continue;
		}
		if (fabs(p.S) < controler / 32.0)
		{
			h = 2.0 * h;
			p.sub = 2;
			p.er = p.S * 16;
			points.push_back(p);
			p.sub = 0;
			i++;
			continue;
		}
		points.push_back(p);
		p.sub = 0;
		i++;
	}
	return points;
}


