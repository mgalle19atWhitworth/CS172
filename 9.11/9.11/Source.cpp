///////////////////
// McKenna Galle
// 2-25-16
// 9.2
// CS-172
//////////////////

#include <iostream>
#include "EvenNumber.h"
using namespace std;

// gets the value from the constructor
int EvenNumber::getValue()  
{
	int even;
	even = 16;
	return even;
}

// Gets the next even number
int EvenNumber::getNext()
{
	int next =	getValue() + 2;
	return next;
}

// gets the previous number
int EvenNumber::getPrevious()
{
	int previous = getValue() - 2;
	return previous;
}

int main()
{
	// makes a new object v1= value 1
	 EvenNumber v1(16);
	cout << " The value is: ";
	// outputs the value
	cout << v1.getValue();
	cout << endl;

	// outputs the next value
	cout << "The next value is:  ";
	cout << v1.getNext();
	cout << endl;

	// outputs the previous value
	cout << "The Previous value is: ";
	cout << v1.getPrevious();
	cout << endl;
	
}