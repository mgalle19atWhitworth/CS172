#include <iostream>
#include "Course.h"
using namespace std;

// the constructor the book has
Course::Course(const string& courseName, int capacity)
{
	numberOfStudents = 0;
	this->courseName = courseName;
	this->capacity = capacity;
	students = new string[capacity];

	
}

// the non argument constructor
Course::~Course()
{
	delete[] students;
}

// gets and returns the name fo the course
string Course::getCourseName() const
{
	return courseName;
}

// add a studnet, and checks if the array is big enough
void Course::addStudent(const string& name)
{
	students[numberOfStudents] = name;
	numberOfStudents++;

	if (numberOfStudents > capacity) {
		for (int x = 0; x < numberOfStudents; x++)
		{

			if (numberOfStudents > capacity)
			{
				// goes through each spot and input the numbers
				int newstudents[100] = students[x];
				cout << newstudents[x];
				cout << endl;
			}
		}
	}
}

void Course ::dropStudent(const string&name)
{
	// drops one of the students
	capacity--;
		students = new string[capacity];
}

// gets and returns the students name
string* Course::getStudents() const
{
	return students;
}
//gets and returns the number of students

int Course::getNumbeOfStudents() const
{
	return numberOfStudents;
}

//clears the course
void Course:: clear()
{
	{
		for (int i = 0; i <= numberOfStudents; i++)
		{
			for (int j = i; j <= numberOfStudents - 1; j++)
			{
				// puts nothing instead of the out was in their
				students[j] = students[j + 1];

			}

			numberOfStudents--;
		}
}