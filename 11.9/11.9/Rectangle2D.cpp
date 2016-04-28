#include "Rectangle2D.h"
// no-arg constructor 
Rectangle2D::Rectangle2D()
{
	// the rectangle is a point (0,0)
	// The width is 1 and height 1
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}
// constructor
Rectangle2D::Rectangle2D(double x2,double y2, double width2,double height2)
{
	//creates object and chooses the x, and y cordinates
	// also chooses the width, and the height
	x = x2;
	y = y2;
	width = width2;
	height = height2;

}

const double Rectangle2D::getx()
{
// gets and returns x
	return x;
}

const double Rectangle2D::gety()
{
	// gets and returns y
	return y;
}

const double Rectangle2D::getwidth()
{// gets and returns width
	return width;
}

const double Rectangle2D::getheight()
{
	// gets and returns height
	return height;
}

const void Rectangle2D::setx(double x3)
{
	// sets x to a new double
	x = x3;
}

const void Rectangle2D::sety(double y3)
{
	// sets y to a new double
	y = y3;
}

const void Rectangle2D::setwidth(double w1)
{
	// sets width to a new double
	width = w1;
}

const void Rectangle2D::setheight(double h1)
{// sets height to a new double
	height = h1;
}

const double Rectangle2D::getperimeter()
{// creates the perimeter formule, and calculates 
	double perimeter = 0;
	perimeter = width * 2 + height * 2;

	return perimeter;
}

const double Rectangle2D::getarea()
{// calucalates the area
	double a;
	a = width *height;

	return a;
}

const bool contains(double x, double y)
{
	bool z = false;
	return z;
}
const bool contains(const Rectangle2D &r)
{
	bool z = false;
	return z;
}
const bool overlaps(const Rectangle2D &r)
{
	bool z = false;
	return z;

}