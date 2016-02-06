//This is the implemenatation file for Point.h, which holds all of the member functions' definitions.

#include<iostream>
#include<cmath>
#include "Point.h"

using namespace std;

Point::Point()
{
	x = 0; y = 0; z = 0;
}

Point::Point(double X, double Y, double Z)
{
	x = X;
	y = Y;
	z = Z;
}

//Mutator Functions
void Point::setX(double newX)
{
	x = newX;
}

void Point::setY(double newY)
{
	y = newY;
}

void Point::setZ(double newZ)
{
	z = newZ;
}

//Accessor Functions
double Point::getX() const
{
	return x;
}

double Point::getY() const
{
	return y;
}

double Point::getZ() const
{
	return z;
}

double Point::distanceTo(const Point& second) const
{
	return sqrt(pow(x - second.getX(), 2) + pow(y - second.getY(), 2) + pow(z - second.getZ(), 2));
}


