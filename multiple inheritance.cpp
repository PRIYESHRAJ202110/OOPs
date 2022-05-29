#include<iostream>
using namespace std;

class Department{
    public:
    Department()
    {
        cout<<"Department constructor called "<<endl;
    }
};

class Teacher{
    public:
    Teacher()
    {
        cout<<"Teacher constructor called "<<endl;
    }
};
class student : public Department,public Teacher{
    public:
    student()
    {
        cout<<"student constructor called "<<endl;
    }
};
int main()
{
    student s;
    return 0;
}