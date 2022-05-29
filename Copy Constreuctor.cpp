#include <iostream>
using namespace std;

class Math
{
    private:
    int a,b ;
    public: 
    Math(int a1, int b1) //concept of paramertrized constructor works
    {
        a=a1;
        b=b1;
      
    }
    Math (const Math &m) // Copy Constructor
    {
        a=m.a;
        b=m.b;
    }
    int getA()
    {
        return a;
    }
    int getB()
    {
        return b;
    }
    
};
int main()
{
   
    Math m(14, 33);
    Math m1 = m;
    cout<< "The value of a is : "<<m.getA()<<endl
        << "The value of b is : "<<m.getB()<<endl<<endl;
        
    cout<< "The value of m.a is : "<<m1.getA()<<endl
        << "The value of m.b is : "<<m1.getB();
     
     return 0;
}
