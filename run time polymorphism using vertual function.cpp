#include <fstream>
#include <iostream>
using namespace std;

class operation {
public:

	virtual void calculate()
	{
		cout << "Addion of your given input ";
	}
};

class Addition1 : public operation {
public:
	int num1, num2, addition;

	void calculate()
	{
		cout << "Enter value of num1 : ";
		cin >> num1;

		cout << "Enter value of  num2 : ";
		cin >> num2;

		addition = num1 + num2;
		cout << "Addition of numbers are: " << addition<< "\n";
	}
};
class Addition2 : public operation {
public:
	int num1,num2,num3, addition;

	void calculate()
	{
		cout << "Enter value of  num1 : ";
		cin >> num1;
		cout<<"Enter value of num2 :";
		cin>>num2;
		cout<<"Enter value of num3 :";
		cin>>num3;
		addition=num1+num2+num3;
		cout << "Addition of numbers are : " << addition;
	}
};

int main()
{
	operation* op;
	Addition1 ad1;

	op = &ad1;
	op->calculate();
	Addition2 ad2;
	op = &ad2;

	op->calculate();

	return 0;
}