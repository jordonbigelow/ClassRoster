#include<string>
#include"student.h"

Student::Student() {
	std::string studentID = "";
	std::string firstName = "";
	std::string lastName = "";
	std::string emailAddress = "";
	std::string degreeProgram = "";
	int age = 0;
	int* numDaysToComplete = new int[3];
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

void Student::SetDegreeProgram(std::string studentDegree) {
	degreeProgram = studentDegree;

	return;
}

void Student::SetAge(int studentAge) {
	age = studentAge;

	return;
}

void Student::SetNumDaysToComplete(int course1, int course2, int course3, int *numDaysToComplete[]) {
	*numDaysToComplete[0] = course1;
	*numDaysToComplete[1] = course2;
	*numDaysToComplete[2] = course3;

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

//Figure out what needs to be printed FIX ME:
void Student::Print() {

	return;
}