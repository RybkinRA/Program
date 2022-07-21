
#include <iostream>
#include <cmath>
#include <vector>
#include "stdlib.h"


struct PPaint
{
	int num;
	double u;
	double xn, v1, v2; //
	double v22, v21, v115, v215; // v удвоенное и v+1/2
	double S, er;
	double h;
	int sub;
	PPaint()
	{
		num = 0;
		sub = u = xn = v1 = v2 = v21 = v22 = v115 = v215 = S = er = 0;
		h = 0.1;
	}
};

inline double max(double x1, double x2)
{
	if (x1 > x2)
		return x1;
	return x2;
}

inline double FV1(double x, double v1, double v2)
{
	return v2;
}

inline double FV2(double x, double v1, double v2, double p, double l)
{
	return p * l * l * (2 * ((1 / l) - (x / (l * l))) * sqrt((1 + v2 * v2) * (1 + v2 * v2) * (1 + v2 * v2)));
}


inline double RK4_1(double x, double v1, double v2, double h)
{
	double V; // Vn+1
	double k1, k2, k3, k4;

	k1 = FV1(x, v1, v2);
	k2 = FV1(x + (h / 2.0), v1 + (h / 2.0) * k1, v2 + (h / 2.0) * k1);
	k3 = FV1(x + (h / 2.0), v1 + (h / 2.0) * k2, v2 + (h / 2.0) * k2);
	k4 = FV1(x + h, v1 + h * k3, v2 + h * k3);

	V = v1 + (h / 6.0) * (k1 + (2.0 * k2) + (2.0 * k3) + k4);

	return V;
}

inline double RK4_2(double x, double v1, double v2, double h, double p, double l)
{
	double V; // Vn+1
	double k1, k2, k3, k4;

	k1 = FV2(x, v1, v2, p, l);
	k2 = FV2(x + (h / 2.0), v1 + (h / 2.0) * k1, v2 + (h / 2.0) * k1, p, l);
	k3 = FV2(x + (h / 2.0), v1 + (h / 2.0) * k2, v2 + (h / 2.0) * k2, p, l);
	k4 = FV2(x + h, v1 + h * k3, v2 + h * k3, p, l);

	V = v2 + (h / 6.0) * (k1 + (2.0 * k2) + (2.0 * k3) + k4);

	return V;
}

//inline std::vector<PPaint> StartMethodTest(int n,PPaint p0)
//{
//	std::vector<PPaint> points;
//	points.push_back(p0);
//	double h = p0.h;
//	int i = 1;
//	double xtmp;
//	PPaint p;
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

inline std::vector<PPaint> StartMethodBasic(int n, PPaint p0, double a, double l)
{
	std::vector<PPaint> points;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	double xtmp;
	PPaint p;
	p.er = p0.er;
	while (i < n + 1)
	{
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		p.v1 = RK4_1(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h);
		p.v2 = RK4_2(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h, a, l);
		xtmp = p.xn - h / 2.0;
		p.v115 = RK4_1(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h / 2.0);
		p.v215 = RK4_2(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h / 2.0, a, l);
		p.v21 = RK4_1(xtmp, p.v115, p.v215, h / 2.0);
		p.v22 = RK4_2(xtmp, p.v115, p.v215, h / 2.0,a,l);
		//if (std::isnan(p.vn) || std::isnan(p.v15) || std::isnan(p.v2)) break;
		p.S = (max(abs(p.v21),abs(p.v22)) - max(abs(p.v1), abs(p.v2))) / 15.0;
		if (abs(p.S) > points[i - 1].er)
		{
			p.sub = -2;
			h = h / 2.0;
			continue;
		}
		if (abs(p.S) < points[i - 1].er / 32.0)
		{
			h = 2.0 * h;
			p.sub = 2;
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


