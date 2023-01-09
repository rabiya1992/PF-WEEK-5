#include <iostream>
#include <cmath>
using namespace std;


main()
{
  float number1;
  float number2;
  float lesser;
  
  cout << "Enter Number: ";
  cin >> number1;
  cout << "Enter Number: ";
  cin >> number2;

  lesser = min(number1, number2);
  cout << lesser << " is lesser" <<endl;

}