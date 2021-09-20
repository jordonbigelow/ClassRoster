#include<iostream>
#include<string>
#include"student.h"
#include"roster.h"
using namespace std;

int main() {
	const string studentData[5] = { "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
								   "A2,Suzan,Erickson,Erickson_1990@gmail.com,19,50,30,40,NETWORK",
								   "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
								   "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
								   "A5,Jordon,Bigelow,jbigel8@wgu.edu,29,30,40,20,SOFTWARE" };
	string studentID = "";
	string firstName = "";
	string lastName = "";
	string emailAddress = "";
	int age = 0;
	int course1Completion = 0;
	int course2Completion = 0;
	int course3Completion = 0;
	DegreeProgram degreeProgram = NETWORK;

    Roster classRoster;

	// Using the parse function to input student data into classRoster data members
	for (int i = 0; i < 5; ++i) {
		classRoster.Parse(studentData[i]);
	}

	// Title of the course, language used, and studentID with my name.
	cout << "Scripting and Programming - Applications - C867" << endl;
	cout << "C++ \"001212046 - Jordon Bigelow\"" << endl;
	cout << endl;

	classRoster.PrintAll();
	classRoster.PrintInvalidEmails();
	classRoster.PrintAverageDaysInCourse("A5");

	return 0;
}