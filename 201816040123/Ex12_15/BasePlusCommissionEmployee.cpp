//Fig 12.16 : BasePlusCommissionEmployee.cpp
//BasePlusCommissionEmployee member-function definitions.
#include<iostream>
#include<stdexcept>

#include"BasePlusCommissionEmployee.h"//BasePlusCommissionEmployee class definition
using namespace std;

//constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &ssn,
        double sales,double rate,double salary)
        :CommissionEmployee(first,last,ssn,sales,rate)
{
    setBaseSalary(salary);  //validate and store base salary
}
//set base salary
void BasePlusCommissionEmployee::setBaseSalary(double salary)
{
    if(salary>=0.0)
        baseSalary=salary;
    else
        throw invalid_argument("Salary must be >= 0.0");
}

//return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}

//calculate earnings;
//override virtual function earnings in CommissionEmployee
double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary()+CommissionEmployee::earnings();
}//end function earnings

//print BasePlusCommissionEmployee's information
void BasePlusCommissionEmployee::print() const
{
    cout << "base-salaried ";
    CommissionEmployee::print();//code reuse
    cout<< "base salary: " << getBaseSalary() << endl;
}//end function print
