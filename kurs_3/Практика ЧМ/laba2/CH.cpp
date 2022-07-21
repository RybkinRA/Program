
#include <iostream>
#include <cmath>
#include <vector>
#include "stdlib.h"


struct PPaint
{
	int num;
	double xn, v1, v2; //
	double v22, v21, v115, v215; // v удвоенное и v+1/2
	double S, er;
	double h,le;
	int sub;
	PPaint()
	{
		num = 0;
		le=sub = xn = v1 = v2 = v21 = v22 = v115 = v215 = S = er = 0;
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
	return   l * l * 2*p*(((1 / l) - (x / (l * l))) * sqrt((1 + v2 * v2) * (1 + v2 * v2) * (1 + v2 * v2)));
}


inline std::vector<double> RK4(double x, double v1, double v2, double h, double p, double l)
{
	std::vector<double> V(2); // Vn+1
	double k11, k12, k21, k22, k31, k32, k41, k42;

	k11 = FV1(x, v1, v2);
	k12 = FV2(x, v1, v2, p, l);
	k21 = FV1(x + (h / 2.0), v1 + (h / 2.0) * k11, v2 + (h / 2.0) * k12);
	k22 = FV2(x + (h / 2.0), v1 + (h / 2.0) * k11, v2 + (h / 2.0) * k12, p, l);
	k31 = FV1(x + (h / 2.0), v1 + (h / 2.0) * k21, v2 + (h / 2.0) * k22);
	k32 = FV2(x + (h / 2.0), v1 + (h / 2.0) * k21, v2 + (h / 2.0) * k22, p, l);
	k41 = FV1(x + h, v1 + h * k31, v2 + h * k32);
	k42 = FV2(x + h, v1 + h * k31, v2 + h * k32, p, l);

	V[0] = v1 + (h / 6.0) * (k11 + (2.0 * k21) + (2.0 * k31) + k41);
	V[1] = v2 + (h / 6.0) * (k12 + (2.0 * k22) + (2.0 * k32) + k42);

	return V;
}

//inline std::vector<double> RK4(double x, double v1, double v2, double h, double p, double l)
//{
//	std::vector<double> V(2); // Vn+1
//	double k11, k12, k21, k22, k31, k32, k41, k42;
//
//	k11 = FV1(x, v1, v2);
//	k12 = FV2(x, v1, v2, p, l);
//	k21 = FV1(x + (h / 4.0), v1 + (h / 4.0) * k11, v2 + (h / 4.0) * k12);
//	k22 = FV2(x + (h / 4.0), v1 + (h / 4.0) * k11, v2 + (h / 4.0) * k12, p, l);
//	k31 = FV1(x + (h / 2.0), v1 + (h / 2.0) * k21, v2 + (h / 2.0) * k22);
//	k32 = FV2(x + (h / 2.0), v1 + (h / 2.0) * k21, v2 + (h / 2.0) * k22, p, l);
//	k41 = FV1(x + h, v1 + h*(k11-2*k21+2*k31), v2 + h * (k12 - 2 * k22 + 2 * k32));
//	k42 = FV2(x + h, v1 + h*(k11 - 2 * k21 + 2 * k31), v2 + h * (k12 - 2 * k22 + 2 * k32), p, l);
//
//	V[0] = v1 + (h/6)*(k11+4*k31+k41);
//	V[1] = v2 + (h / 6) * (k12 + 4 * k32 + k42);
//
//	return V;
//}


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

inline std::vector<PPaint> StartMethodBasic(int n, PPaint p0, double a, double l, double border,double control)
{
	std::vector<PPaint> points;
	points.push_back(p0);
	double h = p0.h;
	int i = 1;
	double tmp;
	double xtmp;
	double length=0.0;
	PPaint p;
	p.le = 0;
	while (i < n + 1)
	{
		p.num = i;
		p.h = h;
		p.xn = points[i - 1].xn + h;
		p.v1 = RK4(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h,a,l)[0];
		p.v2 = RK4(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h, a, l)[1];
		tmp = sqrt((p.xn - points[i-1].xn)*(p.xn - points[i - 1].xn) + ((p.v1-points[i-1].v1) * (p.v1 - points[i - 1].v1)));
		if (tmp+length > l)
		{
			h = h / 2;
			continue;
		}
		xtmp = p.xn - h / 2.0;
		p.v115 = RK4(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h / 2.0,a,l)[0];
		p.v215 = RK4(points[i - 1].xn, points[i - 1].v1, points[i - 1].v2, h / 2.0, a, l)[1];
		p.v21 = RK4(xtmp, p.v115, p.v215, h / 2.0,a,l)[0];
		p.v22 = RK4(xtmp, p.v115, p.v215, h / 2.0, a, l)[1];
		p.S = (max(abs(p.v22),abs(p.v21)) - max(abs(p.v1), abs(p.v2))) / 15.0;
		if (p.v1 - points[i - 1].v1 < 0.00000000000000000001)
		{
			p.v1 += l - length;
			p.le += l - length;
			points.push_back(p);
			break;
		}

		if (abs(p.S) > control)
		{
			h = h / 2.0;
			continue;
		}
		if (abs(p.S) < control / 32.0)
		{
			h = 2.0 * h;
			length += tmp;
			p.le = length;
			points.push_back(p);
			if (length >= l - border && length <= l)
				break;
			i++;
			continue;
		}
		length += tmp;
		p.le = length;
		points.push_back(p);
		if (length >= l - border && length <= l)
			break;
		i++;
	}
	return points;
}


