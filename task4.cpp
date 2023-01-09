#include <iostream>
using namespace std;

int multiplication(int number);

main()
{
 int input;
 int answer;
 cout << "Enter a number: ";
 cin >> input;
 answer = multiplication(input);
 cout << "The product is " << answer <<endl; 

}

int multiplication(int number)
{
 int product;
 product = number * 5;

return product; 

}
