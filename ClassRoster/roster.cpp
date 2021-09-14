#include<iostream>
#include"roster.h"
using namespace std;

void Roster::Add(std::string studentID, std::string firstName, std::string lastName,
	std::string emailAddress, int age, int daysInCourse1, int daysInCourse2,
	int daysInCourse3, DegreeProgram degreeProgram) {
	//Sets the instance variables from part D1 and updates the roster.

	return;
}
void Roster::Remove(std::string studentID) {
	//Removes students from the roster by StudentID.
	//If the studentID does not exist, the function prints an error message
	//indicating that the student was not found.

	return;
}
void Roster::PrintAll() {
	//Prints a complete tab-separated list of student data in the provided format:
	//A1 [tab] First Name: Jordon [tab] Last Name: Bigelow [tab] Age: 29 [tab]
	//daysInCourse: {30, 30, 30} Degree Program: Software.
	//The PrintAll() function should loop through all the students in classRosterArray
	//and call the print() function for each student.

	return;
}
void Roster::PrintAverageDaysInCourse(std::string studentID) {
	//Prints a sutdent's average number of days in the three courses.
	//The student is identified bye the studentID parameter.

	return;
}
void Roster::PrintInvalidEmails() {
	//Need to verify that the student email address is valid
	//and displays invalid email addresses to the user.

	return;
}
void Roster::PrintByDegreeProgram(DegreeProgram degreeProgram) {
	//Prints out student information for a deree program specified by an enumerated type ie. 
	//DegreeProgram(SOFTWARE, NETWORK, SECURITY).

	return;
}