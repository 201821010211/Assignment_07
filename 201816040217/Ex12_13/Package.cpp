#include "Package.h"
#include <bits/stdc++.h>
using namespace std;
//���캯����ʼ�����ݳ�Ա
Package::Package(const string &rName,const string &sName,const string &rAdress,const string &sAdress, const string &code,double f,double w):recipientName(rName),
senderName(sName),recipientAdress(rAdress),senderAdress(sAdress)
{
    setFee(f);
    setWeight(w);
}
string Package::getsAdress()
{
    return senderAdress;
}
string Package::getrAdress()
{
    return recipientAdress;
}
//��weight��fee����ɸѡ
void Package::setFee(double f)
{
    if(f > 0)
        fee = f;
}
double Package::getFee()
{
    return fee;
}
void Package::setWeight(double w)
{
    if(w > 0)
        weight = w;
}
double Package::getWeight()
{
    return weight;
}
//���������Ͱ�˾���ó˻�
double Package::calculateCost()
{
    return weight*fee;
}
