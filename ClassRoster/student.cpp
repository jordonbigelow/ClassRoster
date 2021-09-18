#include<string>
#include<iostream>
#include"student.h"
using namespace std;

Student::Student() {
	string studentID = "";
	string firstName = "";
	string lastName = "";
	string emailAddress = "";
	enum DegreeProgram degreeProgram;
	int age = 0;
	int course1Completion = 0;
	int course2Completion = 0;
	int course3Completion = 0;
	int* numDaysToComplete = new int[3];
}

Student::Student(std::string ID, std::string fName, std::string lName, std::string studentEmailAddress,
	int studentAge, int days[], enum DegreeProgram degree) {

	SetStudentID(ID);
	SetFirstName(fName);
	SetLastName(lName);
	SetEmailAddress(studentEmailAddress);
	SetAge(studentAge);
	SetNumDaysToComplete(days);
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

void Student::SetNumDaysToComplete(int days[]) {
	for (int i = 0; i < 3; ++i) {
		numDaysToComplete[i] = days[i];
	}

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

enum DegreeProgram Student::GetDegreeProgram() {
	return degreeProgram;
}

int Student::GetAge() {
	return age;
}

int Student::GetNumDaysToComplete() {
	return *numDaysToComplete;
}

void Student::Print() {
	std::cout << studentID << "\tFirst Name: " << firstName << "\tLast Name: " << lastName
		<< "\tAge: " << age << "\tdaysInCourse: " << "\{" << numDaysToComplete[0] << ", "
		<< numDaysToComplete[1] << ", " << numDaysToComplete[2] << "\}" << "\tDegree Program: ";

	if (degreeProgram == 0) {
		cout << "SECURITY" << endl;
	}
	else if (degreeProgram == 1) {
		cout << "NETWORK" << endl;
	}
	else if (degreeProgram == 2) {
		cout << "SOFTWARE" << endl;
	}
	
	return;
}