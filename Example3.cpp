#include <iostream>
using namespace std;

float div(float number1, float number2);

main()
{float number1;
 float number2;
 float total;
 cout << "Enter first number: ";
 cin >> number1;
 cout << "Enter second number: ";
 cin >> number2;
 total = div(number1 , number2);
 cout << "division is " <<total <<endl;



}


float div(float number1, float number2)

{float division;
 division = number1 / number2;
 return division;
}


