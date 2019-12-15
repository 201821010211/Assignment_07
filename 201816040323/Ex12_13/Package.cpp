#include <iostream>
#include <string>
#include "Package.h"
using namespace std;

Package::Package(string sen,string acc,string add,string cit,string sta,string zip,double wei,double pri)
{
    setsendp(sen);
    setacceptp(acc);
    setaddress(add);
    setstate(sta);
    setzipcode(zip);
    setweight(wei);
    setprice(pri);
}
void Package::setweight(double wei)
{
    if(wei>0)
        weight=wei;
    else
        cout<<"weight can't be zero" ;
}
double Package::getweight()
{
    return weight;
}
void Package::setprice(double pri)
{
    if(pri>0)
        price=pri;
    else
        cout<<"price can't be zero" ;
}
double Package::getprice()
{
    return price;
}
double Package::calculateCost()
{
    return weight*price;
}
void Package::setsendp(string sen)
{
    sendp=sen;
}
string Package::getsendp()
{
    return sendp;
}
void Package::setacceptp(string acc)
{
    acceptp=acc;
}
string Package::getacceptp()
{
    return acceptp;
}
void Package::setaddress(string add)
{
    address=add;
}
string Package::getaddress()
{
    return address;
}
void Package::setstate(string sta)
{
    state=sta;
}
string Package::getstate()
{
    return state;
}
void Package::setzipcode(string zip)
{
    zipcode=zip;
}
string Package::getzipcode()
{
    return zipcode;
}
void Package::print()
{
    cout << "\nsender name is " << getsendp()
      << "\naccepter name is " << getacceptp()
      << "\naddress is " << getaddress()
      << "\nstate is " << getstate()
      << "\nzip code is " << getzipcode()
      << "\nweight is " << getweight()
      << "\nprice is " << getprice();
}
