#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include <iostream>
#include <string>
#include "Package.h"

using namespace std;

class OvernightPackage:public Package
{
public:
	OvernightPackage (const string &,const string &,const string &,const string &,const string &,const string &,double,double,double);   //�ļ��ˣ��ռ��ˣ���ַ�����У������ݣ���������,������ÿ��˾�۸� ,������� 
	void setAdditionalCosts(double);//set �������
	double getAdditionalCosts();
	double CalculateCost();
private:
	double additionalcosts;
};

#endif 
