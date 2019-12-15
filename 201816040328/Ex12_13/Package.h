#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include<string.h>

using namespace std;


class Package
{
public:
    //constructor function
    Package(const string ,const string ,const string ,const string ,const string ,
            const string ,const string ,const string ,const string ,const string ,
            const double ,const double   );
    void setPricePerWeight(double );
    void setWeight(double );
    double getPricePerWeight();
    virtual double calculateCost();

    string getDeAddress();
    string getReAddress();
private:
    //the information of deliverer
    string DeName;//the name of deliverer
    string DeAddress;//the address of deliverer
    string DeCity;//the city of deliverer
    string DeState;//the state of deliverer
    string DeCode;//the zip code of deliverer
    //the information of receive
    string ReName;//the name of receiver
    string ReAddress;//the address of receiver
    string ReCity;//the city of receiver
    string ReState;//the state of receive
    string ReCode;//the zip code of receive
    //the information of package
    double Weight;//the weight of package
    double PricePerWeight;//the price for per weight
};
#endif // PACKAGE_H_INCLUDED
