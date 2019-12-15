// Exercise 12.13 Solution:OvernightPackage.cpp
#include<stdexcept>
#include<iostream>
using namespace std;
#include"OvernightPackage.h"
//constructor
OvernightPackage::OvernightPackage(const string &senderName,const string &sendAddress,const string &sendCity,const string &sendState,const string &sendPostalCode,const string &receiverName,const string &receiveAddress,const string &receiveCity,const string &receiveState,const string &receivePostalCode,double w,double f,double addition)
    :Package(senderName, sendAddress, sendCity, sendState, sendPostalCode, receiverName, receiveAddress, receiveCity, receiveState, receivePostalCode, w, f)
{
    setAdditionalFee(addition);
}//end OvernightPackage constructor
//set additionalFee
void OvernightPackage::setAdditionalFee(double addition)
{
     if(addition>=0)
        additionalFee=addition;
    else
        throw invalid_argument("additionalFee must be >= 0.0");
}
//return additionalFee
double OvernightPackage::getAdditionalFee()const
{
    return additionalFee;
}

//return calculateCost
double OvernightPackage::calculateCost()const
{
    return Package::getWeight()*(Package::getFee()+getAdditionalFee());
}
//print OvernightPackage object
void OvernightPackage::print()const
{
    Package::print();
    cout << "\nadditionalFee: " << additionalFee;
}
