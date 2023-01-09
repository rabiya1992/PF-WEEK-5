#include <iostream>
using namespace std;

void addition(int number1, int number2);

main()
{int number1;
 int number2;
 cout << "Enter first number: ";
 cin >> number1;
 cout << "Enter second number: ";
 cin >> number2;
 addition(number1 , number2);
 cout << "program ends";



}

void addition(int number1, int number2)
{int sum;
 sum = number1 + number2;
 cout << "The sum is " << sum <<endl;

}


