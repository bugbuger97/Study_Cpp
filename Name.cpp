#include<string>
#include<sstream>
#include<stdexcept>
#include"Name.h"
using namespace std;

Name::Name(string firstName, string lastName) {
	setFirstName(firstName);
	setLastName(lastName);
}

void Name::setFirstName(string firstName) {
	if (firstName.length() < 2) {
		throw invalid_argument("length of the firstName must be longer than 1");
	}
	this->firstName = firstName;
}

void Name::setLastName(string lastName) {
	if (lastName.length() < 2) {
		throw invalid_argument("length of the lastName must be longer than 1");
	}
	this->lastName = lastName;
}

string Name::getFirstName() const { return firstName; };
string Name::getLastName() const { return lastName; };

string Name::getFullName() const {
	ostringstream fullname;
	fullname << firstName << " " << lastName;
	return fullname.str();
}