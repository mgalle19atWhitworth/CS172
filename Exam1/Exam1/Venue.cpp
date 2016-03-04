#include <iostream>
#include "Event.h"
#include "Venue.h"
#include <string>

using namespace std;

// I think im supposed to use a pass by reference but im not sure how
bool Venue::validTime(int time)
{
	return false;
}
// no-argument constructor
Venue::Venue()
{

}

// This adds the event not sure how im supposed to go from there
void Venue::addEvent(  int Time, string name) 
{
	const int time3 = Time;
	scheduledEvents[time3];
	Event e1(Time, name);

}
 Event findEvent(int time)
{
	Event e1;
	 e1.setTime(time);
	 e1.getTitle;

	 //not sure what i'm supposed to return 

	
}
 Event findEvent(string name)
 {
	 Event e1;
	 e1.setTitle;
	 e1.getTime;
	 // not sure what i'm supposed to return.
 }