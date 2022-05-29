#include <iostream>
using namespace std;

class Math
{
    private:
    int a,b,c ;
    public: 
    Math(int a1, int b1, int c1)
    {
        a=a1;
        b=b1;
        c=c1;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    int getC()
    {
        return c;
    }
};
int main()
{
   
    Math m(19, 42, 66);
    cout<< "The value of a is : "<<m.getA()<<endl
        << "The value of y is : "<<m.getB()<<endl
        << "The value of z is : "<<m.getC();
        
    return 0;
}