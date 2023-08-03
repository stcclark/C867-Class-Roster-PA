#pragma once
#include <iostream>


enum DegreeProgram {
	SECURITY, NETWORK, SOFTWARE
};


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




const string studentData[] =
{
"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Stephen,Clark,scla714@wgu.edu,29,60,SOFTWARE"
};
