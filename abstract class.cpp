#include <iostream>
using namespace std;

class Shape  
{
public:
    int n;
    int no_of_sides()
    {
        return n;
    }
};
class Trapezoid : public Shape
{
public:
    Trapezoid(int n1)
    {
        n = n1;
    }
};
class Triangle : public Shape
{
public:
    Triangle(int n1)
    {
        n = n1;
    }
};
class Hexagon : public Shape
{
public:
    Hexagon(int n)
    {
        this->n = n;
    }
};
int main()
{
    Trapezoid T(3);
    Triangle T1(4);
    Hexagon H(5);
    cout << "No of sides in Trapezoid is : " << T.no_of_sides() << endl;
    cout << "No of sides in Triangle is : " << T1.no_of_sides() << endl;
    cout << "No of sides in Hexagon is : " << H.no_of_sides() << endl;
    return 0;
}