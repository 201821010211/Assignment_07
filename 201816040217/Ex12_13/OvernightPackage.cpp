#include<bits/stdc++.h>
#include"Package.h"
#include"OvernightPackage.h"
using namespace std;
//���캯����ʼ�����ݳ�Ա
OvernightPackage::OvernightPackage(const string &rName,const string &sName,const string &rAdress,const string &sAdress, const string &code,double f,double w,double e)
:Package(rName,sName,rAdress,sAdress,code,f,w)
{
        setExtraFee(e);
}
//ɸѡextraFee
void OvernightPackage::setExtraFee(double e)
{
    if(e > 0)
        extraFee = e;
}

double OvernightPackage::getExtraFee()
{
    return extraFee;
}
//�����µļ������
double OvernightPackage::calculateCost()
{
    return this->getWeight()*(this->getFee()+extraFee);
}
