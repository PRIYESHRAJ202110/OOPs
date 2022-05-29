#include<iostream>
using namespace std;
class Sum {
int x,	y;
public :
Sum(int num1, int num2 )	
{ 
    
         // parameterized constructor
   cout <<	"Constructor	at	work"	<< endl;
   x	= num1;
   y	= num2;
}

~Sum(	)
{																																																	//destructor
cout<<	"Destructor	at	work"	<< endl;
}
int getSum(){
return	x	+	y;
}
};
								
int main() 
{
	  Sum obj(9, 11);
	  return 0;
}