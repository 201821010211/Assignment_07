
#include <string>

#include "OvernightPackage.h"

using namespace std;
OvernightPackage::OvernightPackage(const string &send,const string &receipt,const string &add,const string &cit,const string &sta,const string &code,double we,double fe,double ac)    //�ļ��ˣ��ռ��ˣ���ַ�����У������ݣ���������,������ÿ��˾�۸� ,������� 
					:Package(send,receipt,add,cit,sta,code,we,fe)
{
	setAdditionalCosts(ac);
} 
void OvernightPackage::setAdditionalCosts(double ac)//set �������
{
	additionalcosts=ac;
}
double OvernightPackage::getAdditionalCosts()
{
	return additionalcosts;
}
double OvernightPackage::CalculateCost()
{
	return getWeight()*(getFee()+getAdditionalCosts());
}

