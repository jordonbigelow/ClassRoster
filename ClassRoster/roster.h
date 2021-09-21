#ifndef ROSTER_H
#define ROSTER_H
#include<string>

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
	void Parse(std::string studentInfo);
	~Roster();
private:
	Student* classRosterArray[5];
	int index = 0;
};

#endif
