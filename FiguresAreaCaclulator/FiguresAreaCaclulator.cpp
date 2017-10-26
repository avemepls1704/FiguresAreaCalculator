// FiguresAreaCaclulator.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>

double getRectangleArea(double a, double b);
double getCircleArea(double r);
double getSquareArea(double a);
double getTriangleArea(double a, double h);


int main()
{
    return 0;
}

double getRectangleArea(double a, double b)
{
	return a * b;
}

double getCircleArea(double r)
{
	return atan(1) * 4 * r * r;
}

double getSquareArea(double a)
{
	return a * a;
}

double getTriangleArea(double a, double h)
{
	return a * h / 2;
}