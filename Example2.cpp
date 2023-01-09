#include <iostream>
using namespace std;

int multiplication(int number1, int number2);

main()
{int number1;
 int number2;
 int total;
 cout << "Enter first number: ";
 cin >> number1;
 cout << "Enter second number: ";
 cin >> number2;
 total = multiplication(number1 , number2);
 cout << "Product is " << total <<endl;
 cout << "program ends !";



}

int multiplication(int number1, int number2)
{int product;
 product = number1 * number2;
 return product;
}


