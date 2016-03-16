#include <iostream>
using namespace std;
#ifndef RegularPolygon_H_
#define RegularPolgon_H_
class RegularPolygon {
private:
	// length of the sides of the polygon
	int n;
	// where it is on the x axis
	double x;
	// number of sides
	double side;
	// where it is on the y axis
	double y;

public:
	// non-agrument constructor 
	RegularPolygon();
	// constrcutor asks for the length of sides, and the number of sides
	RegularPolygon(int N, double Sides);
	// constructor asks of the length of the sides, the number of sides, and where it is on the x and y axis
	RegularPolygon(int N, double Sides,  double X, double Y);
	int getn();
	double getx();
	double getside();
	double gety();
	void setn(int n1);
	void setx(double x1);
	void setside(double side1);
	void sety(double y1);
	// calculates the perimeter
	const double getPerimeter();
	// calculates the area
	const double GetArea();

};
#endif