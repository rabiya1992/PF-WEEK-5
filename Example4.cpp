#include <iostream>
using namespace std;

int maximum(int number1, int number2);


main()
{
 int number1;
 int number2;
 int greater;
 cout << "Enter first number: ";
 cin >> number1;
 cout << "Enter second number: ";
 cin >> number2;
 greater = maximum(number1, number2);
 cout << "Maximum is " <<greater <<endl;


}


int maximum(int number1, int number2)

{ if(number1 > number2)
  {
   return number1;
   }
  
  if(number2 > number1)
  {
   return number2;
  }
 
 return 0;

}


