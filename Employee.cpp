#include<iostream>
#include<sstream>
#include"Employee.h"
#include"Date.h"
using namespace std;

Employee::Employee(const string& first, const string& last, const Date& dateOfBirth, const Date& dateOfHire)
	: firstName{ first }, lastName{ last }, birthDate{ dateOfBirth }, hireDate{ dateOfHire } {
	cout << "Employee object constructor: " << firstName << ' ' << lastName << endl;
}

ostream& operator<<(ostream& output, const Employee& e){
	output << e.lastName << ", " << e.firstName << "  Hired: " << e.hireDate << " Birthday: " << e.birthDate;
	return output;
}

Employee::~Employee() {
	cout << "Employee object destructor: " << lastName << ", " << firstName << endl;
}