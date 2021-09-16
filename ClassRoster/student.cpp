#include<string>
#include<iostream>
#include"student.h"
#include"degree.h"

Student::Student() {
	std::string studentID = "";
	std::string firstName = "";
	std::string lastName = "";
	std::string emailAddress = "";
	enum DegreeProgram degreeProgram;
	int age = 0;
	int course1Completion = 0;
	int course2Completion = 0;
	int course3Completion = 0;
	int* numDaysToComplete = new int[3];
}

Student::Student(std::string ID, std::string fName, std::string lName, std::string studentEmailAddress,
	int studentAge, int course1, int course2, int course3, enum DegreeProgram degree) {

	SetStudentID(ID);
	SetFirstName(fName);
	SetLastName(lName);
	SetEmailAddress(studentEmailAddress);
	SetAge(studentAge);
	SetNumDaysToComplete(course1, course2, course3/*, numDaysToComplete[]*/);
	SetDegreeProgram(degree);

	return;
}

void Student::SetStudentID(std::string ID) {
	studentID = ID;

	return;
}

void Student::SetFirstName(std::string studentFirstName) {
	firstName = studentFirstName;

	return;
}

void Student::SetLastName(std::string studentLastName) {
	lastName = studentLastName;

	return;
}

void Student::SetEmailAddress(std::string studentEmail) {
	emailAddress = studentEmail;

	return;
}

void Student::SetDegreeProgram(enum DegreeProgram studentDegree) {
	degreeProgram = studentDegree;

	return;
}

void Student::SetAge(int studentAge) {
	age = studentAge;

	return;
}

void Student::SetNumDaysToComplete(int course1, int course2, int course3/*, int *numDaysToComplete[]*/) {
	//*numDaysToComplete[0] = course1;
	//*numDaysToComplete[1] = course2;
	//*numDaysToComplete[2] = course3;

	/*std::cout << "Yay!" << std::endl;*/

	return;
}

std::string Student::GetStudentID() {
	return studentID;
}

std::string Student::GetFirstName() {
	return firstName;
}

std::string Student::GetLastName() {
	return lastName;
}

std::string Student::GetEmailAddress() {
	return emailAddress;
}

std::string Student::GetDegreeProgram() {
	return degreeProgram;
}

int Student::GetAge() {
	return age;
}

int Student::GetNumDaysToComplete() {
	return *numDaysToComplete;
}

// Figure out what needs to be printed FIX ME:
void Student::Print() {
	std::cout << studentID << "\tFirst Name: " << firstName << "\tLast Name: " << lastName
		<< "\tAge: " << age << "\tdaysInCourse: " << "\{" << course1Completion << ", "
		<< course2Completion << ", " << course3Completion << "\}" << "\tDegree Program: "
		<< degreeProgram << std::endl;
	return;
}