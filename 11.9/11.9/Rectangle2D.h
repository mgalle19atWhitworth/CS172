#include <iostream>
using namespace std;
#ifndef Rectangle2D_H_
#define Rectangle2D_H_
class Rectangle2D {
private:
	double x;
	double y;
	double width;
	double height;
public:
	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);
	 const double getx();
	const double gety();
	const double getwidth();
	const double getheight();
	const void setx(double x1);
	const void sety(double y1);
	const  void setwidth(double width1);
	const void setheight(double height1);
	const double getarea();
	const double getperimeter();
	const bool contains(double x, double y);
	const bool contains(const Rectangle2D &r);
	const bool overlaps(const Rectangle2D &r);
};


#endif