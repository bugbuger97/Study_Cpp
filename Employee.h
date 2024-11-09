#pragma once
#include<string>

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
#include"Date.h"

class Employee {
	friend std::ostream& operator << (std::ostream&, const Employee&);
public:
	Employee(const std::string&, const std::string&, const Date&, const Date&);
	~Employee();
private:
	std::string firstName;
	std::string lastName;
	const Date birthDate;
	const Date hireDate;
};

#endif
