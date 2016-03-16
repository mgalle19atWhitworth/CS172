#include <iostream>
#include "RegularPolygon.h"
using namespace std;

int main()
{
	// Calls the no-arg constructor 
	RegularPolygon RP1;
	cout << "The first Polygon" << endl;
	//outputs the perimeter of the polygon
	cout << "The Perimeter is: " << RP1.getPerimeter() << endl;
	//outputs the area of the polygon
	cout << "The Area is: " << RP1.GetArea() << endl;
	cout << endl;

	// Calls the second constructor 
	RegularPolygon RP2(6, 4);
	cout << "The second Polygon" << endl;
	//outputs the perimter of the polygon
	cout << "The Perimeter is: " << RP2.getPerimeter() << endl;
	//outputs the area of the polygon
	cout << "The Area is: " << RP2.GetArea() << endl;
	cout << endl;

	// calls the third constrcutor 
	RegularPolygon RP3(10,4,5.6,7.8);
	cout << "The third Polygon" << endl;
	// outputs the perimeter of the polygon
	cout << "The Perimeter is: " << RP3.getPerimeter() << endl;
	// outputs the area of the polygon
	cout << "The Area is: " << RP3.GetArea() << endl;
	cout << endl;




}