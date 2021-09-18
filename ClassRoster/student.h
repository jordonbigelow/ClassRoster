#ifndef STUDENT_H
#define STUDENT_H
#include"degree.h"
#include<string>

class Student {
public:
	Student();
	Student(std::string studentID, std::string firstName, std::string lastName,
		std::string emailAddress, int age, int days[], enum DegreeProgram degreeProgram);
	void SetStudentID(std::string ID);
	void SetFirstName(std::string studentFirstName);
	void SetLastName(std::string studentLastName);
	void SetEmailAddress(std::string studentEmail);
	void SetDegreeProgram(enum DegreeProgram studentDegree);
	void SetAge(int studentAge);
	void SetNumDaysToComplete(int days[]);
	std::string GetStudentID();
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetEmailAddress();
	enum DegreeProgram GetDegreeProgram();
	int GetAge();
	int GetNumDaysToComplete();
	void Print();

private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	enum DegreeProgram degreeProgram;
	int age;
	int course1Completion;
	int course2Completion;
	int course3Completion;
	int degreeProgramStrings[3];
	int numDaysToComplete[3];
};

#endif
