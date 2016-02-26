#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// The quadraticEquation class
class QuadraticEquation 
{
	//The whole thing is public
public:
	// The attrubutes
	int a;
	int b;
	int c;
	
	// constructor 
	QuadraticEquation(int A, int B, int C)
	{

		a = A;
		b = B;
		c = C;
	}
	
	// functions so we can get the discrinant
	int discriminant;
	int geta(){return a;}
	int getb(){return b;}
	int getc() { return c; }
	
	// fucntions to find the answer
	double getDiscriminant();
	double getRoot1();
	double getRoot2();
};

