
#include<string>
using namespace std;
class Employee
{
public:
    Employee(const string &,const string &,const string &);
    virtual ~Employee(){}
    void setFristName(const string &);
    string getFirstName()const;
    void setLastName(const string &);
    string getLastName()const;
    void setSocialSecurityNumber(const string &);
    string getSocialSecurityNumber()const;
    virtual double earnings()=0;
    virtual void print()const;
private:
    string firstName;
    string lastName;
    string socialSecurityNumber;

};
