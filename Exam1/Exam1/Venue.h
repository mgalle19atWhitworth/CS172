#include <iostream>
#include <string>
#ifndef Venue_H_
#define Venue_H_
#include "Event.h"
using namespace std;

class Venue
{
private:
	// the array for the time of day the event is scheduled
	Event scheduledEvents[12];
	// total number of Events
	int numEvents;

	// Checks to time is vaild or not
	bool validTime(int time);

public:
	// no-argument constructor
	Venue();
	// adds an event and makes an event
	void addEvent(int Time, string name);
	// finds the event using name, and outputs the name
	 Event  findEvent(int time);
	 // finds the event using the name and outputs the time
	 Event  findEvent(string name);






};
#endif
