#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H


#include <string>
#include "Package.h"

using namespace std;

class TwoDayPackage:public Package
{
public:
	TwoDayPackage (const string &,const string &,const string &,const string &,const string &,const string &,double,double,double);    //�ļ��ˣ��ռ��ˣ���ַ�����У������ݣ���������,������ÿ��˾�۸� ,ƽ�ķ� 
    void setFlatcharge(double);
	double getFlatcharge(); 
	double CalculateCost();
private:
	double flatcharge ;//ƽ�ķ� 
};

#endif 

