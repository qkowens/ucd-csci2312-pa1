//This file will compute the area between three points on a 3D plane.
//Quinn Owens

#include<iostream>
#include<cmath>
#include"Point.h"

using namespace std;

double computeArea(const Point &a, const Point &b, const Point &c)
{
	double AB, BC, CA;
	
	AB = a.distanceTo(b);
	BC = b.distanceTo(c);
	CA = c.distanceTo(a);

	double s = (AB + BC + CA) / 2;
	
	return sqrt(s * (s - AB) * (s - BC) * (s - CA));
}