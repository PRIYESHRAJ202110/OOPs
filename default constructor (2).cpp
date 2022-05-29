#include<iostream>
using namespace std;
class Constructor
{
    public :
    int x, y;
    Constructor()
   {
    x=20;
    y=35;
}
};
int main()
{
Constructor c;
cout<< "the value of x is" << c.x<<endl;
cout<< "the value of y is" << c.y;
return 0;
}