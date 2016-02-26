#include <iostream>
#include <string>
#include <cmath>
#include "QuadraticEquation.h"
using namespace std;

// Equation to find the discrimiant
double QuadraticEquation::getDiscriminant() {
	// equation used in the book
	discriminant = pow(b, 2) - (4 * a*c);

	
	
	return discriminant;
}

// equation to find the root for addition
double QuadraticEquation::getRoot1()
{
	
	int ans1;
	// If Discrimiant is negative then it will output zero for answer
	if (getDiscriminant() < 0)
	{
		ans1 = 0;
	}

	else {
		//equation in the book
		ans1 = (-b + sqrt(getDiscriminant())) / (2 * a);
	}
	return ans1;
}

double QuadraticEquation::getRoot2()
{
	int ans2;
	// If dicrimiant is negative then it will output zero for answer
	if (getDiscriminant() < 0)
	{
		ans2 = 0;
	}
	
	else
	{
		// equation used in the book
		 ans2 = (-b - sqrt(getDiscriminant())) / (2 * a);
	}
	return ans2;

}


int main()
{
	// allows the user to input numbers for a,b, and c.
	int a, b, c;
	cout << "Enter a, b, and c: ";
	cin >> a;
	cin >> b;
	cin >> c;
	
	// inputs the numbers the user entered into the constructor 
	QuadraticEquation q1(a, b, c);
	
	cout << " The discrimiant is: ";
	// calls the disscrimiant function
	cout << q1.getDiscriminant();
	cout << endl;

	// If the discrimiant is postive then it will ouput both roots
	if (q1.getDiscriminant() > 0)
	{

		cout << "The first root is: ";
		cout << q1.getRoot1();
		cout << endl;
		cout << "The secound root is ";
		cout << q1.getRoot2();
		cout << endl;
	}
	// if the discrimaint equals zero then it will output one of the roots
	else if (q1.getDiscriminant() == 0)
	{
		cout << "The answer is: ";
		cout << q1.getRoot1();
		cout << endl;
	}
	// if the discrimaint is negative then it won't output any of the answers. 
	else if (q1.getDiscriminant() < 0)
	{
		cout << "The equation has no real roots";
		cout << endl;
	}
}