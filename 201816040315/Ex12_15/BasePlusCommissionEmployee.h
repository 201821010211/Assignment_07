//Base plus commission employee .h
//base plus commission employee class derived from CommissionEmployee
#ifndef BASEPLUS_H
#define BASEPLUS_H
#include <string>
#include"CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee(const string &,const string &,const string &,double =0.0,double=0.0,double=0.0);
    virtual ~BasePlusCommissionEmployee(){}//virtual destructor
    void setBaseSalary( double );//set base salary
    double getBaseSalary()const;//return base salary

    virtual double earnings() const override;
    virtual void print()const override;
private:
    double baseSalary;//base salary per week
};//end class BasePlusCommissionEmployee
#endif // BASEPLUS_H
