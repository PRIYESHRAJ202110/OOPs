#include<iostream>
using namespace std;
class Fruits{
    public:
    Fruits()
    {
        cout<<"This is Fruits "<<endl;
    }
};
class Market{
    public:
    Market()
    {
        cout<<"Fruits sell in market "<<endl;
    }
};
class mango : public Fruits{
    
};
class banana : public Fruits,public Market{
    
};
int main()
{
    banana obj2;
    return 0;
}