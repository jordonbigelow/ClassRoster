#include<iostream>
#include<string>
#include"student.h"
#include"roster.h"
#include"degree.h"
using namespace std;

Student* parse(string studentInfo) {
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

	return new Student(studentID, firstName, lastName, emailAddress, age, course1Completion, course2Completion, course3Completion, degreeProgram);
}

int main() {
	const string studentData[5] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
								   "A2,Suzan,Erickson,Erickson_1990@gmail.com,19,50,30,40,NETWORK",
								   "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
								   "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
								   "A5,Jordon,Bigelow,jbigel8@wgu.edu,29,30,30,30,SOFWTWARE" };

	string studentID = "";
	string firstName = "";
	string lastName = "";
	string emailAddress = "";
	int age = 0;
	int course1Completion = 0;
	int course2Completion = 0;
	int course3Completion = 0;
	DegreeProgram degreeProgram = NETWORK;

	Student* classRosterArray[5];

	for (int i = 0; i < 5; ++i) {
		classRosterArray[i] = parse(studentData[i]);
		classRosterArray[i]->Print();
	}

	for (int i = 0; i < 5; ++i) {
		delete classRosterArray[i];
	}

	return 0;
}