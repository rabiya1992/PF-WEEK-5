#include <iostream>
#include <cmath>
using namespace std;


main()
{
  int number1;
  int number2;
  int power;
  
  cout << "Enter Number: ";
  cin >> number1;
  cout << "Enter Number: ";
  cin >> number2;

  power = pow(number1, number2);
  cout << power << " is power of number2" << endl;

}