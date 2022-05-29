#include<iostream>
using namespace std;

class Hospital{
    public:
    Hospital()
    {
        cout<<"Hospital give services to all "<<endl;
    }
};

class Doctors{
    public:
    Doctors()
    {
        cout<<"Doctors take check-up of all pateint on monday "<<endl;
    }
};

class pateint : public Doctors{
    public:
    pateint()
    {
        cout<<"Doctors  provide a good precaution and saftey from disease "<<endl;
    }
};

int main()
{
    pateint pt;
    return 0;
}