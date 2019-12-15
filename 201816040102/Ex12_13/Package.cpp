#include <iostream>
#include <string>
#include "Package.h"
#include <stdexcept>

using namespace std;

Package::Package (const string &send, const string &receipt, const string &add, const string &cit, const string &sta, const string &code, double we,double fe)     //�ļ��ˣ��ռ��ˣ���ַ�����У������ݣ���������,������ÿ��˾�۸� 
{
	setSenderName(send);
	setAddresseeName(receipt);
	setAddress(add);
	setCity(cit);
	setState(sta);
	setPostalCode(code);
	setWeight(we);
	setFee(fe);
		
}
void Package::setSenderName(string send)	//set �ļ�������
{
	sender = send;
}
string Package::getSenderName()
{
	return sender;
}
void Package::setAddresseeName(string receipt)	//set �ռ�������
{
	addressee=receipt;	
} 
string Package::getAddresseeName()
{
	return addressee;
}
void Package::setAddress(string add)	//set ��ַ
{
	address=add;
}
string Package::getAddress()
{
	return address;
}
void Package::setCity(string cit)	//set ����
{
	city=cit;	
} 
string Package::getCity()
{
	return city;
}
void Package::setState(string sta)	//set ������ 
{
	state=sta;	
}
string Package::getState()
{
	return state;
}
void Package::setPostalCode(string code)	//set ��������
{
	postalcode = code;
}
string Package::getPostalCode()
{
	return postalcode;
}	
void Package::setWeight(double we)
{
	if(we>0)
	{
		weight=we;
	}
	else
		throw invalid_argument("weight must be > 0");
}
double Package::getWeight()
{
	return weight;
}
void Package::setFee(double fe)
{
	if(fe>0)
	{
		fee=fe;
	}
	else
	{        
		throw invalid_argument("fee must be > 0");
	}
}              
double Package::getFee()
{
	return fee;
}
double Package::CalculateCost()
{
	return getWeight()*getFee();
}
