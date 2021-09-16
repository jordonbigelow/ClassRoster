#include<iostream>
#include"roster.h"
#include"degree.h"
using namespace std;

Roster::Roster(std::string ID, std::string studentFirstName, std::string studentLastName,
	std::string studentEmailAddress, int studentAge, int course1,
	int course2, int course3, enum DegreeProgram degree) {
	studentID = ID;
	firstName = studentFirstName;
	lastName = studentLastName;
	emailAddress = studentEmailAddress;
	age = studentAge;
	course1Completion = course1;
	course2Completion = course2;
	course3Completion = course3;
	degreeProgram = degree;
}

Roster::Roster() {
	studentID = "";
	firstName = "";
	lastName = "";
	emailAddress = "";
	age = 0;
	course1Completion = 0;
	course2Completion = 0;
	course3Completion = 0;
	degreeProgram = NETWORK;
}

void Roster::Add(std::string studentID, std::string firstName, std::string lastName,
	std::string emailAddress, int age, int daysInCourse1, int daysInCourse2,
	int daysInCourse3, enum DegreeProgram degreeProgram) {
	
	for (int i = 0; i < 5; ++i) {
		Student* student = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degreeProgram);
		classRosterArray[i] = student;
	}
	
	return;
}
void Roster::Remove(std::string studentID) {
	// Removes students from the roster by StudentID.
	// If the studentID does not exist, the function prints an error message
	// indicating that the student was not found.

	return;
}
void Roster::PrintAll() {
	// Prints a complete tab-separated list of student data in the provided format:
	// A1 [tab] First Name: Jordon [tab] Last Name: Bigelow [tab] Age: 29 [tab]
	// daysInCourse: {30, 30, 30} Degree Program: Software.
	// The PrintAll() function should loop through all the students in classRosterArray
	// and call the print() function for each student.
	cout << studentID << "\tFirst Name: " << firstName << "\tLast Name: " << lastName
		 << "\tAge: " << age  << "\tdaysInCourse: " << "\{" << course1Completion << ", "
		 << course2Completion << ", " << course3Completion << "\}" << "\tDegree Program: " 
		 << degreeProgram << endl;

	return;
}
void Roster::PrintAverageDaysInCourse(std::string studentID) {
	// Prints a sutdent's average number of days in the three courses.
	// The student is identified bye the studentID parameter.

	return;
}
void Roster::PrintInvalidEmails() {
	// Need to verify that the student email address is valid
	// and displays invalid email addresses to the user.

	return;
}
void Roster::PrintByDegreeProgram(DegreeProgram degreeProgram) {
	// Prints out student information for a deree program specified by an enumerated type ie. 
	// DegreeProgram(SOFTWARE, NETWORK, SECURITY).

	return;
}