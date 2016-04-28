/////////////////
// McKenna Galle
//4-7-15
// 11.3
//172
/////////////////

#include <iostream>
using namespace std;
// Function the book uses 
int * doubleCapacity(const int *list, int size)
{	// y add the numbers into the new array
	int y = 6;
	// the array size times two
	const int size2 = size * 2;
	// make the new array bigger then the last one
	int * newlist = new int[size2];
	// Goes through the old array and inputs it into the new array
	for (int x = 0; x < size2; x++)
	{
		
		if (x < 5)
		{
			// goes through each spot and input the numbers
			newlist[x] = list[x];
			cout << newlist[x];
			cout << endl;
		}
		else
		{// goes through and adds new numvers
			newlist[x] = y;
			cout << newlist[x];
			y ++ ;
			cout << endl;
		}
	}

	return newlist;
}

int main()
{
	 
	const int size1 =5;
	int y = 1;
	int oldlist[size1];
	// Makes the old array
	for (int x = 0; x < size1; x++)
	{
		
		oldlist[x] = y;
		y++;
	}
	doubleCapacity(oldlist, size1);
	
}