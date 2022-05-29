#include<iostream>
using namespace std;
class Distance{
    public:
    int km, meter;
    Distance(int k,int m)
    {
        this->km=k;
        this->meter=m;
    }
    void operator -()
    {
        km--;
        meter--;
        cout<<"Distance in kilometer and meter are "<<km<<"'"<<meter<<endl;
    }
};
int main()
{
    Distance d(4,400);
    -d;
    return 0;
}