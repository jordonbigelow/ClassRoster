#ifndef STUDENT_H
#define STUDENT_H
#include"degree.h"
#include<string>
using namespace std;

class Student {
public:
	Student();
	Student(string studentID, string firstName, string lastName,string emailAddress, 
		 int age, int days[], enum DegreeProgram degreeProgram);
	void SetStudentID(string ID);
	void SetFirstName(string studentFirstName);
	void SetLastName(string studentLastName);
	void SetEmailAddress(string studentEmail);
	void SetDegreeProgram(enum DegreeProgram studentDegree);
	void SetAge(int studentAge);
	void SetNumDaysToComplete(int days[]);
	string GetStudentID();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	enum DegreeProgram GetDegreeProgram();
	int GetAge();
	int GetNumDaysToComplete();
	void Print();

private:
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	enum DegreeProgram degreeProgram;
	int age;
	int course1Completion;
	int course2Completion;
	int course3Completion;
	int numDaysToComplete[3];
};

#endif
