#include "OvernightPackage.h"
#include "Package.h"
#include <string>//C++ standard string class
#include <iostream>

using namespace std;

OvernightPackage::OvernightPackage(const string &sender,const string &addressee,const string &addr1,const string &addr2,const string &ci,const string &state,const string &postal,double other)
  :Package(sender,addressee,addr1,addr2,ci,state,postal)
{
    setOtherfee(other);
}//end OvernightPackage constructor

void OvernightPackage::setOtherfee(double other)
{
    if(other>0.0)
        otherfee=other;
}//end function setOtherfee

double OvernightPackage::getOtherfee()
{
    return otherfee;
}//end function getOtherfee

double OvernightPackage::calculateCost(double other)
{
    return Package::getFee()+other;
}//end function calculateCost
