#include<iostream>
using  namespace std;
class addition{
    public:
    int num1,num2;
    addition()
    {
        this->num1=0;
        this->num2=0;
    }
    addition(int a,int b)
    {
        this->num1=a;
        this->num2=b;
    }
    addition operator +(addition& ad2)  // Call by reference
    {
        addition ad3; 
        ad3.num1=this->num1+ad2.num1;
        ad3.num2=this->num2+ad2.num2;
        return ad3;
    }
    
};
int main()
{
    addition ad1(21,32);
    addition ad2(63,34);
    addition ad3;
    ad3=ad2+ad1;
    cout<<"The sum of the numbers are "<<ad3.num1<<","<<ad3.num2<<endl;
    return 0;
}