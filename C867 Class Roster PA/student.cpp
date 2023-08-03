#include "student.h"
#include <iostream>
using namespace std;

class Student {

public:
	void setStudentId(string studentId);

	void setFirstName(string firstName);

	void setLastName(string lastName);

	void setEmail(string emailAddress);

	void setAge(int age);

	int	 numOfDaysForCourse[15];

	void setDegreeProgram(string degreeProgram);
};
