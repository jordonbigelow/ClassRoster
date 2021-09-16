#ifndef ROSTER_H
#define ROSTER_H
#include<string>
#include"degree.h"
#include"student.h"

class Roster {
public:
	Roster();
	Roster(std::string ID, std::string studentFirstName, std::string studentLastName,
		std::string studentEmailAddress, int studentAge, int course1,
		int course2, int course3, enum DegreeProgram degree);
	void Add(std::string studentID, std::string firstName, std::string lastName,
		     std::string emailAddress, int age, int daysInCourse1, int daysInCourse2,
		     int daysInCourse3, DegreeProgram degreeProgram);
	void Remove(std::string studentID);
	void PrintAll();
	void PrintAverageDaysInCourse(std::string studentID);
	void PrintInvalidEmails();
	void PrintByDegreeProgram(DegreeProgram degreeProgram);
private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	int course1Completion;
	int course2Completion;
	int course3Completion;
	enum DegreeProgram degreeProgram;
	Student* classRosterArray[5];
};

#endif
