#include<iostream>
using namespace std;
//Creating class of Time 
class TIME 
{
    // creating data members
  int hours, minutes,add;
  public:
  //creating and define function to take input
  void input() 
{
  cout << "Enter the value of hours and minutes :";
  cin >> hours>>minutes;
 }
 //creating friend function
  friend void add(TIME &t);
  // creating and derive the function for display output
  void display() 
 {
     hours=hours*60;
   cout << "The sum is :" <<hours+minutes;
 }
};
//creating function to add the object
  void add(TIME &t) 
{
   t.add = t.hours + t.minutes;
}
int main() 
  {
      //creating object of Class TIME 
   TIME t1;
   //calling the fucntion to take the input
   t1.input();
   //calling the fucntion to add the two values
   add(t1);
   //calling the function to display the result
   t1.display();
   return 0;
}