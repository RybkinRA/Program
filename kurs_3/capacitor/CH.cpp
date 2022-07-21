
#include <iostream>
#include <cmath>
#include <vector>


struct DataPoints
{
	int num;
	double xn, vn, un;
	double v2, v15; // v удвоенное и v+1/2
	double S, er;
	double h;
	DataPoints()
	{
		num = 0;
		un = xn = vn = v2 = v15 = S = er = 0;
		h = 0.1;
	}
};


inline double F_UTrue(double t, double v0, double R, double C, double t0)
{
	return v0 *exp(t0/(R*C))* exp(-t / (R * C));
}

//inline double F_ITrue(double t, double v0, double R, double C)
//{
//	return -1 * (v0 * exp(-t / (R * C))) / R;
//}

inline double F_U(double x, double v, double R, double C)
{
	return -v / (R * C);
}

inline double F_I(double x, double v, double R, double C)
{
	return -v / R;
}


inline double RK4_U(double Xn, double Vn, double hn, double R, double C)
{
	double V;
	double k1, k2, k3, k4;

	k1 = F_U(Xn, Vn, R, C);
	k2 = F_U(Xn + (hn / 2.0), Vn + (hn / 2.0) * k1, R, C);
	k3 = F_U(Xn + (hn / 2.0), Vn + (hn / 2.0) * k2, R, C);
	k4 = F_U(Xn + hn, Vn + hn * k3, R, C);

	V = Vn + (hn / 6.0) * (k1 + (2.0 * k2) + (2.0 * k3) + k4);

	return V;
}

inline std::vector<DataPoints> StartMethodU(int n, DataPoints p0, double control, double R, double C, double t0, double border)
{
	std::vector<DataPoints> points;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	double xtmp;
	DataPoints p;
	while (i < n + 1)
	{
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		p.vn = RK4_U(points[i - 1].xn, points[i - 1].vn, h,R,C);
		p.un = F_UTrue(p.xn, p0.vn, R, C,t0);
		p.er = p.un - p.vn;
		xtmp = p.xn - h / 2;
		p.v15 = RK4_U(points[i - 1].xn, points[i - 1].vn, h / 2.0, R, C);
		p.v2 = RK4_U(xtmp, p.v15, h / 2.0, R, C);
		p.S = (p.vn - p.v2) / 15.0;
		if (abs(p.S) > control)
		{
			h = h / 2.0;
			continue;
		}
		if (abs(p.S) < control / 32.0)
		{
			h = 2.0*h;
			points.push_back(p);
			i++;
			continue;
		}
		points.push_back(p);
		if (abs(0 - p.vn) < border)
			break;
		i++;
	}
	return points;
}

inline std::vector<DataPoints> StartU(int n, DataPoints p0,double R, double C,double t0 ,double control)
{
	std::vector<DataPoints> points;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	//double xtmp;
	DataPoints p;
	while (i < n + 1)
	{
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		
		p.vn = RK4_U(points[i - 1].xn, points[i - 1].vn, h, R, C);
		p.un = F_UTrue(p.xn, p0.vn, R, C,t0);
		p.er = p.un - p.vn;
		points.push_back(p);
		if (abs(0 - p.vn) < control)
			break;
		i++;
	}
	return points;
}


//inline std::vector<DataPoints> StartMethodBasic(int n, double controler, double border, DataPoints p0, double a, double s)
//{
//	std::vector<DataPoints> points;
//	points.push_back(p0);
//	double h = p0.h;
//	int i = 1;
//	double xtmp;
//	DataPoints p;
//	while (i < n + 1)
//	{
//		if (points[i - 1].vn >= 0 && points[i - 1].vn <= border)
//			break;
//		p.num = i;
//		p.h = h;
//		p.xn = points[i - 1].xn + h;
//		p.vn = RK4_BASIC(points[i - 1].xn, points[i - 1].vn, h, a, s);
//		xtmp = p.xn - h / 2.0;
//		p.v15 = RK4_BASIC(points[i - 1].xn, points[i - 1].vn, h / 2.0, a, s);
//		p.v2 = RK4_BASIC(xtmp, p.v15, h / 2.0, a, s);
//		if (std::isnan(p.vn) || std::isnan(p.v15) || std::isnan(p.v2))
//		{
//			p.sub = -2;
//			h = h / 2;
//		}
//		p.S = (p.vn - p.v2) / 15.0;
//		if (abs(p.S) > controler)
//		{
//			p.sub = -2;
//			h = h / 2.0;
//			continue;
//		}
//		if (abs(p.S) < controler / 32.0)
//		{
//			h = 2.0 * h;
//			p.sub = 2;
//			p.er = p.S * 16;
//			points.push_back(p);
//			p.sub = 0;
//			i++;
//			continue;
//		}
//		points.push_back(p);
//		p.sub = 0;
//		i++;
//	}
//	return points;
//}


