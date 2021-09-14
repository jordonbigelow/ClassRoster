#ifndef ROSTER_H
#define ROSTER_H
#include<string>
#include"degree.h"

class Roster {
public:
	void Add(std::string studentID, std::string firstName, std::string lastName,
		     std::string emailAddress, int age, int daysInCourse1, int daysInCourse2,
		     int daysInCourse3, DegreeProgram degreeProgram);
	void Remove(std::string studentID);
	void PrintAll();
	void PrintAverageDaysInCourse(std::string studentID);
	void PrintInvalidEmails();
	void PrintByDegreeProgram(DegreeProgram degreeProgram);
private:
	std::string* classRosterArray = new std::string[5];
};

#endif
