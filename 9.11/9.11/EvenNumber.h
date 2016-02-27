/*  ---Joseph--- Don't forget to include header definition guards. This will be very important as the projects get bigger. */


#include <iostream>
using namespace std;


class EvenNumber
{ public:
	
	EvenNumber(int even)
	{
		even = 2;
	}
	int getValue();
	int getNext();
	int getPrevious();
	
};