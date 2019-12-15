#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ standard string class
#include "CommissEmployee.h" // CommissionEmployee class definition


class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
   BasePlusCommissionEmployee( const std::string &, const std::string &,
      const std::string &, double = 0.0, double = 0.0, double = 0.0 );
    virtual ~BasePlusCommissionEmployee(){}

    void setBaseSalary( double ); // set base salary
    double getBaseSalary() const; // return base salary

    virtual double earnings() const override; // calculate earnings
    virtual void print() const override; // print BasePlusCommissionEmployee object

private:
   double baseSalary; // base salary

};
#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
