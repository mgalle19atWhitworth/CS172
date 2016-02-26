/////////////////
// McKenna Galle
// 2-25-16
// 9.2
// CS-172
////////////////


#include <iostream>
using namespace std;
// The class fan
class Fan
{
// The whole thing is public
public:
	// The attributes
	bool on;
	int speed;
	double radius;
	//Operations
	void fan()
	{
		//defult fan
		speed = 1;
		on = false;
		radius = 5;
	}
};
int main()
{
	//Fan1 attributes
	Fan Fan1, Fan2;
	Fan1.speed = 3;
	Fan1.radius = 10;
	Fan1.on = true;

	//Fan 2s attributes
	Fan2.speed = 2;
	Fan2.radius = 5;
	Fan2.on = false;

	// out putting fan 1's attribute
	cout << "Fan 1\n";

	cout << " Fan 1 speed: " << Fan1.speed << endl;
	cout << "Fan 1 radius: " << Fan1.radius << endl;
	cout << "Is Fan 1 on? " << Fan1.on << endl;
	cout << endl;

	// out putting fan2's attrubute
	cout << "Fan 2\n";

	cout << " Fan 2 speed: " << Fan2.speed << endl;
	cout << "Fan 2 radius: " << Fan2.radius << endl;
	cout << "Is Fan 2 on? " << Fan2.on << endl;
	cout << endl;

}
