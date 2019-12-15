#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <Package *> packages(2);
    TwoDayPackage package2("Dany","Zhangsan","���ݴ�ѧ","����","֣��","723500",3,6,4); //create a TwoDayPackage object
    OvernightPackage package3("LiHua","Bob","�Ĵ���ѧ","�Ĵ�","�ɶ�","234500",3,6,5); //create a OvernightPackage object
    packages[0] = &package2;
    packages[1] = &package3;
   cout << "�����ߵ�ַ��" << packages[0] -> getAddress() << " �����ߵ�ַ�� " << packages[0] -> getCity() << packages[0] -> getState() << endl;
   cout << "�����ߵ�ַ��" << packages[1] -> getAddress() << " �����ߵ�ַ:  " << packages[1] -> getCity() << packages[1] -> getState() << endl;
   cout << "�ܷ��ã�" << packages[0] -> calculateCost() + packages[1] -> calculateCost();
    return 0;
}
