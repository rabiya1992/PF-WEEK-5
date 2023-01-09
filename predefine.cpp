#include <iostream>
#include <cmath>
using namespace std;


main()
{
  int number1;
  int number2;
  int greater;
  
  cout << "Enter Number: ";
  cin >> number1;
  cout << "Enter Number: ";
  cin >> number2;

  greater = max(number1, number2);
  cout << greater << " is greater" <<endl;

}