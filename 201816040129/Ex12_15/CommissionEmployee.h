#ifndef COMMISSIONEMPLOYEE_H_INCLUDED
#define COMMISSIONEMPLOYEE_H_INCLUDED

#include"Employee.h"
using namespace std;

class CommissionEmployee: public Employee
{
public:
    CommissionEmployee(const string &,const string &,const string &,double=0.0,double =0.0);
    void setCommissionRate(double);//set commission rate
    double getCommissionRate()const;//return commission rate
    void setGrossSales(double);//set gross sales amount
    double getGrossSales()const;//get gross sales amount
    virtual double earnings()const override;//calculate earnings
    virtual void print()const override;//print object
private:
    double grossSales;//gross weekly sales
    double commissonRate;//commission percentage
};

#endif // COMMISSIONEMPLOYEE_H_INCLUDED
