#include <iostream>
using namespace std;

// asks the user to pick how big the array should be
void sizeofArray(int *size)
{
	cout << "How big do you want the array? ";
	cin >> *size;
	cout << endl;
}

int *Array(int size)
{// make a new array and inputs it to 10
	int *pArray = new int[size];

		for (int i = 0; i < size; i++)
		{
			pArray[i] = 10;
		}
		return pArray;
}

void enternumber(int *numbers, int size)
{
	// has the user enter numbers for the array
	for (int * num = numbers; num < numbers + size; num++)
	{
		cout << "Enter numbers: ";
		cin >> *num;
	}
}
// Function take the average of the numbers and then counts how many numbers are above
double average(int *numbers, int size)
{
	double average1 = 0;
	int AboveAverage = 0;
	int addingNum = 0;
	int count = 0;
	int * num = numbers;
// sums up the numbers in the arrays
	for (int i = 0; i < size; i++)
	{
		num[i];
		addingNum = addingNum + *num;
		num++;
		count++;
	}
	// takes the average of the the array
	average1 = addingNum / count;
	cout << "The average is: " << average1 << endl;


	// checks what numbers are above the average
	for (int *x = numbers;x < numbers + size; x++)
	{
		if (*x > average1)
		{
			AboveAverage++;
		}
	}

	cout << "The number of numbers above the average is: " << AboveAverage << endl;

	
	return average1;
}




int main()
{
	int num;
	sizeofArray(&num);
	// creates a pointer
	int *numbers = Array(num);
	enternumber(numbers, num);
	average(numbers, num);
// deletes the pointer
	delete[] numbers;


	return 0;
}