#include <iostream>
#include <string>
#ifndef Event_H_
#define Event_H_
using namespace std;

class Event
{
private:
	// the time and title of the event are private
	 int time;
	string title;
		
public:
	// the consturctors are public
	Event();
	Event(int time2, string name);

	// get the time and title and stores it
	int getTime();
	string getTitle();
	//gets the time and title because they are private
	 void setTime(int t);
		
	 void setTitle(string name);


};
#endif