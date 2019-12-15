#include <iostream> 
#include <string> 
#include <vector> 
#include "Package.h" 
#include "TwoDayPackage.h" 
#include "OvernightPackage.h"
using namespace std; 
int main() 
{ 
    vector<Package*> p(3); 
    p[0] = new Package("wu", "WangHaoliang", "HAUT", "Zhengzhou", "Henan", "450000", 20.0, 2.0);             //20��˾��ÿ��˾�ʷ�2��Ǯ 
    p[1] = new TwoDayPackage("wu", "YanHaokang", "HAUT", "Zhengzhou", "Henan", "450000", 20.0, 2.0, 10.0); //����10��Ǯƽ�ķ� 
    p[2] = new OvernightPackage("wu", "PiaoShengyuan", "HAUT", "Zhengzhou", "Henan", "450000", 20, 2.0, 0.6); //ÿ��˾����6ëǮ 
    for(int i=0;i<3;i++) 
    { 
        cout<<"Sender:"<<p[i]->getSenderName()<<endl; 
        cout<<"Recipient:"<<p[i]->getAddresseeName()<<endl; 
        cout<<"Address:"<<p[i]->getAddress()<<endl; 
        cout<<"City:"<<p[i]->getCity()<<endl; 
        cout<<"State:"<<p[i]->getState()<<endl; 
        cout<<"Postcode:"<<p[i]->getPostalCode()<<endl; 
        cout<<"Price:"<<p[i]->CalculateCost()<<endl; 
        cout<<endl; 
    } 
    system("pause"); 
}
