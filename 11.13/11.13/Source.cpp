#include <iostream>
#include "Course.h"
using namespace std;


int main()
{
	// adds a course
	Course Course1("Computer Science", 10);

	// adds three students
	Course1.addStudent("Bob Joe");
	Course1.addStudent("Billy Bob");
	Course1.addStudent("Third Student");

	// drops one of the students
	Course1.dropStudent;
	// out puts the students;
	cout << Course1.getStudents;
}