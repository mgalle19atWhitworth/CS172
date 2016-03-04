#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"
using namespace std;

// Creates a contructor
Event::Event(int time2, string name)
{
	time = time2;
	title = name;
}
//Default Conructor
Event::Event()
{
	time = -1;
	title = "Free";
}


// makes the time usable
void Event::setTime(int t)
{
	time = t;
}

// makes the name usable
void Event::setTitle(string name)
{
	title = name;
}

// stores the time
 int Event :: getTime()
 {
	 return time;
 }

 // stores the time
 string Event::getTitle()
 {
	 return title;
 }