#include <iostream>
#include "Rectangle2D.h"
using namespace std;

int main()
{
	Rectangle2D r1(2, 2, 5.5, 4.9), r2(4, 5, 10.5, 3.2), r3(3, 5, 2.3, 5.4);

	// area of the first rectangle 
	cout << "The r1 area is:" << r1.getarea() << endl;
	// perimeter of the first rectangle
	cout <<"r1's perimeter is:" << r1.getperimeter()<< endl;

	cout << r1.contains(3, 3);
	cout << r1.contains(r2);
	cout << r1.overlaps(r3);

}