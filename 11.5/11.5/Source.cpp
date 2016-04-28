/////////////////
// McKenna Galle
// 4-7-16
// 11.5
// 172
///////////////

#include <iostream>
using namespace std;

int main() {
	// creates a pointer
	int *p;
	// creates an array
	int smallest[8];
	// has the user enter in 8 numbers of their choice
	cout << "Enter 8 numbers: " ;
	for (int i=0; i < 8; i++)
	{
		cin >> smallest[i];
	}
	// the pointer equals the first number in the array
	p = &smallest[0];
	for (int x = 0; x < 8; x++)
	{
		// goes through and checks the the pointer is bigger then the number in the array if it is the reassigned that number
		if (*p > smallest[x]) {
			*p = smallest[x];
		}
	}

	cout << "The smallest number is: " << *p << endl;

}