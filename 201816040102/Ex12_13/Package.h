#ifndef PACKAGE_H
#define PACKAGE_H

#include <iostream>
#include <string>

using namespace std;

class Package
{
public:
	Package (const string &,const string &,const string &,const string &,const string &,const string &,double,double);      //�ļ��ˣ��ռ��ˣ���ַ�����У������ݣ���������,������ÿ��˾�۸� 
	void setSenderName(string );	//set �ļ�������
	string getSenderName();
	void setAddresseeName(string );	//set �ռ�������
	string getAddresseeName();
	void setAddress(string );	//set ��ַ
	string getAddress();
	void setCity(string );	//set ���� 
	string getCity();
	void setState(string );	//set ������ 
	string getState();
	void setPostalCode(string );	//set ��������
	string getPostalCode();	
	void setWeight(double);
	double getWeight();
	void setFee(double);
	double getFee();
	virtual double CalculateCost();
private:
	double weight;
	double fee;
	string sender;  
	string addressee;
	string address;
	string city;
	string state;
	string postalcode; 
};

#endif 
