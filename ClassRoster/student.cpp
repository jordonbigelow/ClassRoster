#include<string>
#include<iostream>
#include"student.h"
using namespace std;

Student::Student() {
	studentID = "";
	firstName = "";
	lastName = "";
	emailAddress = "";
	DegreeProgram degreeProgram;
	age = 0;
	course1Completion = 0;
	course2Completion = 0;
	course3Completion = 0;
	numDaysToComplete[3];
}

Student::Student(string ID, string fName, string lName, string studentEmailAddress,
	int studentAge, int* days, enum DegreeProgram degree) {

	SetStudentID(ID);
	SetFirstName(fName);
	SetLastName(lName);
	SetEmailAddress(studentEmailAddress);
	SetAge(studentAge);
	SetNumDaysToComplete(days);
	SetDegreeProgram(degree);

	return;
}

void Student::SetStudentID(string ID) {
	studentID = ID;

	return;
}

void Student::SetFirstName(string studentFirstName) {
	firstName = studentFirstName;

	return;
}

void Student::SetLastName(string studentLastName) {
	lastName = studentLastName;

	return;
}

void Student::SetEmailAddress(string studentEmail) {
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

void Student::SetNumDaysToComplete(int* days) {
	for (int i = 0; i < 3; ++i) {
		numDaysToComplete[i] = days[i];
	}

	return;
}

string Student::GetStudentID() {
	return studentID;
}

string Student::GetFirstName() {
	return firstName;
}

string Student::GetLastName() {
	return lastName;
}

string Student::GetEmailAddress() {
	return emailAddress;
}

enum DegreeProgram Student::GetDegreeProgram() {
	return degreeProgram;
}

int Student::GetAge() {
	return age;
}

int* Student::GetNumDaysToComplete() {
	return numDaysToComplete;
}

void Student::Print() {
	string degree = "";
	if (degreeProgram == 0) {
		degree = "SECURITY";
	}
	else if (degreeProgram == 1) {
		degree = "NETWORK";
	}
	else if (degreeProgram == 2) {
		degree = "SOFTWARE";
	}

	cout << studentID << "\tFirst Name: " << firstName << "\tLast Name: " << lastName
		<< "\tAge: " << age << "\tdaysInCourse: " << "\{" << numDaysToComplete[0] << ", "
		<< numDaysToComplete[1] << ", " << numDaysToComplete[2] << "\}" << "\tDegree Program: " << degree << endl;
	

	return;
}