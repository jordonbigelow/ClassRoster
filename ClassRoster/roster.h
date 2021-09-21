#ifndef ROSTER_H
#define ROSTER_H
#include<string>
using namespace std;

class Roster {
public:
	void Add(string studentID, string firstName, string lastName,
		     string emailAddress, int age, int daysInCourse1, int daysInCourse2,
		     int daysInCourse3, DegreeProgram degreeProgram);
	void Remove(string studentID);
	void PrintAll();
	void PrintAverageDaysInCourse(string studentID);
	void PrintInvalidEmails();
	void PrintByDegreeProgram(DegreeProgram degreeProgram);
	void Parse(string studentInfo);
	string GetID(int index1);
	~Roster();
private:
	Student* classRosterArray[5];
	int index = 0;
};

#endif
