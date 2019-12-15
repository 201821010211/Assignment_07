#include <iostream>
#include <string>

#include "TwoDayPackage.h"

using namespace std;
TwoDayPackage::TwoDayPackage(const string &send,const string &receipt,const string &add,const string &cit,const string &sta,const string &code,double we,double fe,double flat)    //�ļ��ˣ��ռ��ˣ���ַ�����У������ݣ���������,������ÿ��˾�۸� ,ƽ�ķ�
					:Package(send,receipt,add,cit,sta,code,we,fe) 
{
	setFlatcharge(flat);
}
void TwoDayPackage::setFlatcharge(double flat)
{
	flatcharge=flat;
}
double TwoDayPackage::getFlatcharge()
{
	return flatcharge;	
} 
double TwoDayPackage::CalculateCost()
{
	return getWeight()*getFee()+getFlatcharge();
}
		   

