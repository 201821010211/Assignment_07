//Ex12_15:Employee.cpp
//Abstract-base-class Employee member-fuction definitions.
#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;

//constructor
Employee::Employee(const string& first, const string& last, const string& ssn)
	:firstName(first), lastName(last), socialSecurityNumber(ssn)
{
	//empty body
}//end Employee constructor

//set first name
void Employee::setFirstName(const string& first)
{
	firstName = first;
}

//return first name
string Employee::getFirstName() const
{
	return firstName;
}

//set last name
void Employee::setLastName(const string& last)
{
	lastName = last;
}

//return last name
string Employee::getLastName() const
{
	return lastName;
}

//set social security number
void Employee::setSocialSecurityNumber(const string& ssn)
{
	socialSecurityNumber = ssn;
}

//return social security number
string Employee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
}

//print Employee's information(virtual, but not pure virtual)
void Employee::print() const
{
	cout << getFirstName() << ' ' << getLastName() << "\nsocial security number: " << getSocialSecurityNumber();
}

