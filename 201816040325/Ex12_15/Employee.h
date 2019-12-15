#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED
#include <string> // C++ standard string class
using namespace std;

class Employee
{
public:
   Employee( const string &, const string &, const string &);
   virtual ~Employee(){}

   void setFirstName( const string & ); // set first name
   string getFirstName() const; // return first name

   void setLastName( const string & ); // set last name
   string getLastName() const; // return last name

   void setSocialSecurityNumber( const string & ); // set SSN
   string getSocialSecurityNumber() const; // return SSN

   virtual double earnings() const = 0 ; // calculate earnings
   virtual void print(); // print CommissionEmployee object
private:
   string firstName;
   string lastName;
   string socialSecurityNumber;

}; // end class Employee


#endif // EMPLOYEE_H_INCLUDED
