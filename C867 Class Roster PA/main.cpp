#include <iostream>
#include "student.h"
#include "roster.h"
#include "degree.h"


int main(){
	
	std::cout << "Scripting and Programming - Applications - C867 " << "C++ " << "010007671 " << "Stephen Clark" << std::endl;

	classRoster.printAll();
	
	classRoster.printInvalidEmails();



	//loop through classRosterArray and for each element:

	classRoster.printAverageDaysInCourse(/*current_object's student id*/);

	classRoster.printByDegreeProgram(SOFTWARE);

	classRoster.remove("A3");

	classRoster.printAll();

	classRoster.remove("A3");

//expected: the above line should print a message saying such a student with this ID was not found.














	return 0;
}