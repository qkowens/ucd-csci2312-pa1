//This file will compute the area between three points on a 3D plane.
//Quinn Owens

#include<iostream>
#include<cmath>
#include"Point.h"

using namespace std;

double computeArea(const Point &a, const Point &b, const Point &c)
{
	Point alpha, bravo, charlie;
	double AB, BC, CA;
	
	AB = alpha.distanceTo(bravo);
	BC = bravo.distanceTo(charlie);
	CA = charlie.distanceTo(alpha);

	double pt1 = pow(pow(AB, 2) + pow(BC, 2) + pow(CA, 2), 2);
	double pt2 = 2 * (pow(AB, 4) + pow(BC, 4) + pow(CA, 4));

	return (sqrt(pt1 - pt2)) / 4;
}