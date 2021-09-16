#ifndef STUDENT_H
#define STUDENT_H
#include<string>

class Student {
public:
	Student();
	Student(std::string studentID, std::string firstName, std::string lastName,
		std::string emailAddress, int age, int course1Completion, int course2Completion,
		int course3Complion, enum DegreeProgram degreeProgram);
	void SetStudentID(std::string ID);
	void SetFirstName(std::string studentFirstName);
	void SetLastName(std::string studentLastName);
	void SetEmailAddress(std::string studentEmail);
	void SetDegreeProgram(enum DegreeProgram studentDegree);
	void SetAge(int studentAge);
	void SetNumDaysToComplete(int course1, int course2, int course3/*, int *numDaysToComplete[]*/);
	std::string GetStudentID();
	std::string GetFirstName();
	std::string GetLastName();
	std::string GetEmailAddress();
	std::string GetDegreeProgram();
	int GetAge();
	int GetNumDaysToComplete();
	void Print();

private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	std::string degreeProgram;
	int age;
	int course1Completion;
	int course2Completion;
	int course3Completion;
	int degreeProgramStrings[3];
	int numDaysToComplete[];
};

#endif
