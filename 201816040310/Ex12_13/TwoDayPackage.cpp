#include "TwoDayPackage.h"
#include <iostream>

using namespace std;

TwoDayPackage::TwoDayPackage(string sender,string reciver,string address, 
					string city,string state,
					string zipCode,
					double weight,double cost,
					double ordinaryCost):
Package(sender,reciver,address,city,state,zipCode,weight,cost)
{
	this->ordinaryCost=ordinaryCost>0?ordinaryCost:1;// Construct 
}


double TwoDayPackage::calculateCost(){
	//Total cost is weight*cost add ordinaryCost
	return weight*cost+ordinaryCost;
}

// print the package's infomation
void TwoDayPackage::print(){ 
	cout<<"-------TwoDayPackage-------"<<endl;
	Package::print();
}