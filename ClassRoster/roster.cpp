#include<iostream>
#include"student.h"
#include"roster.h"
using namespace std;
Roster::~Roster() {

	return;
}
void Roster::Add(string studentID, string firstName,string lastName,
	string emailAddress, int age, int daysInCourse1, int daysInCourse2,
	int daysInCourse3, enum DegreeProgram degreeProgram) {
	int days[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };
	classRosterArray[index++] = new Student(studentID, firstName, lastName, emailAddress, age, days, degreeProgram);

	return;
}
void Roster::Remove(string studentID) {
	// Removes students from the roster by StudentID.
	// If the studentID does not exist, the function prints an error message
	// indicating that the student was not found.

	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] != nullptr) {
			if (classRosterArray[i]->GetStudentID() == studentID) {
				delete classRosterArray[i];
				classRosterArray[i] = nullptr;
			}
		}
		else {
			cout << "Student " << studentID << " does not exist." << endl;
		}
	}

	return;
}
string Roster::GetID(int index1) {

	return classRosterArray[index1]->GetStudentID();
}
void Roster::PrintAll() {
	// Prints a complete tab-separated list of student data in the provided format:
	// A1 [tab] First Name: Jordon [tab] Last Name: Bigelow [tab] Age: 29 [tab]
	// daysInCourse: {30, 30, 30} Degree Program: Software.
	// The PrintAll() function should loop through all the students in classRosterArray
	// and call the print() function for each student.
	
	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] != nullptr) {
			classRosterArray[i]->Print();
		}
	}
	cout << endl;
	return;
}
void Roster::PrintAverageDaysInCourse(string studentID) {
	// Prints a sutdent's average number of days in the three courses.
	// The student is identified bye the studentID parameter.

	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] != nullptr) {
			if (classRosterArray[i]->GetStudentID() == studentID) {
				cout << (classRosterArray[i]->GetNumDaysToComplete()[0] + classRosterArray[i]->GetNumDaysToComplete()[1] + classRosterArray[i]->GetNumDaysToComplete()[2]) / 3.0 << endl;
			}
		}
	}

	return;
}
void Roster::PrintInvalidEmails() {
	// Need to verify that the student email address is valid
	// and displays invalid email addresses to the user.
	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] != nullptr) {
			if (classRosterArray[i]->GetEmailAddress().find("@") == string::npos ||
				classRosterArray[i]->GetEmailAddress().find(".") == string::npos ||
				classRosterArray[i]->GetEmailAddress().find(" ") != string::npos) {

				cout << classRosterArray[i]->GetEmailAddress() << endl;
			}
		}
	}
	cout << endl;
	return;
}
void Roster::PrintByDegreeProgram(DegreeProgram degreeProgram) {
	// Prints out student information for a deree program specified by an enumerated type ie. 
	// DegreeProgram(SOFTWARE, NETWORK, SECURITY).

	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i] != nullptr) {
			if (classRosterArray[i]->GetDegreeProgram() == degreeProgram) {
				classRosterArray[i]->Print();
			}
		}
	}
	cout << endl;
	return;
}

void Roster::Parse(string studentInfo) {
	size_t rightHandSide = studentInfo.find(",");
	string studentID = studentInfo.substr(0, rightHandSide);

	size_t leftHandSide = rightHandSide + 1;
	rightHandSide = studentInfo.find(",", leftHandSide);
	string firstName = studentInfo.substr(leftHandSide, rightHandSide - leftHandSide);

	leftHandSide = rightHandSide + 1;
	rightHandSide = studentInfo.find(",", leftHandSide);
	string lastName = studentInfo.substr(leftHandSide, rightHandSide - leftHandSide);

	leftHandSide = rightHandSide + 1;
	rightHandSide = studentInfo.find(",", leftHandSide);
	string emailAddress = studentInfo.substr(leftHandSide, rightHandSide - leftHandSide);

	leftHandSide = rightHandSide + 1;
	rightHandSide = studentInfo.find(",", leftHandSide);
	int age = stoi(studentInfo.substr(leftHandSide, rightHandSide - leftHandSide));

	leftHandSide = rightHandSide + 1;
	rightHandSide = studentInfo.find(",", leftHandSide);
	int course1Completion = stoi(studentInfo.substr(leftHandSide, rightHandSide - leftHandSide));

	leftHandSide = rightHandSide + 1;
	rightHandSide = studentInfo.find(",", leftHandSide);
	int course2Completion = stoi(studentInfo.substr(leftHandSide, rightHandSide - leftHandSide));

	leftHandSide = rightHandSide + 1;
	rightHandSide = studentInfo.find(",", leftHandSide);
	int course3Completion = stoi(studentInfo.substr(leftHandSide, rightHandSide - leftHandSide));

	leftHandSide = rightHandSide + 1;
	rightHandSide = studentInfo.find(",", leftHandSide);
	string strDegreeProgram = studentInfo.substr(leftHandSide, rightHandSide - leftHandSide);

	enum DegreeProgram degreeProgram = DegreeProgram::NETWORK;
	if (strDegreeProgram == "NETWORK") {
		degreeProgram = DegreeProgram::NETWORK;
	}
	else if (strDegreeProgram == "SECURITY") {
		degreeProgram = DegreeProgram::SECURITY;
	}
	else if (strDegreeProgram == "SOFTWARE") {
		degreeProgram = DegreeProgram::SOFTWARE;
	}

	Add(studentID, firstName, lastName, emailAddress, age, course1Completion, course2Completion, course3Completion, degreeProgram);

	return;
}
