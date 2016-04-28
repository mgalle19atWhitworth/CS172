#include "RegularPolygon.h"
#include <cmath>

RegularPolygon::RegularPolygon()
{
	// the specs for the no-arg constructor
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int N, double Sides)
{
	// lets the length of the sides = n
	n = N;
	//lets the number o sides = side
	side = Sides;
	// the polygon is center at (0,0)
	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int N, double Sides, double X, double Y)
{
	// inputs the number of side, the length of the sides, x and y.
	n = N;
	side = Sides;
	x = X;
	y = Y;
}
int RegularPolygon::getn()
{
	// returns the length of the sides
	return n;
}

double RegularPolygon::getx()
{
	return x;
}

double RegularPolygon::getside()
{
	return side;
}

double RegularPolygon::gety()
{
	return y;
}

void RegularPolygon::setn(int n1)
{
	n = n1;
}

void RegularPolygon::setx(double x1)
{
	x = x1;
}

void RegularPolygon::setside(double side1)
{
	side = side1;
}

void RegularPolygon::sety(double y1)
{
	y = y1;
}

const double RegularPolygon::getPerimeter()
{
	// perimeter is the lenght of the sides * the number of sides
	double perimeter = n * side;
	return perimeter;
}

const double RegularPolygon::GetArea()
{
	// the area is the number of sides * the power of the number of sides /  4 times the tan of pie / the length of the sides
	double area = (n * pow(side, 2)) / (4 * tan(3.1415 / n));
	return area;
}
