#include <iostream>
#include <cmath>
using namespace std;


main()
{
  int number1;
  int cubeRoot;
  
  cout << "Enter Number: ";
  cin >> number1;

  cubeRoot = cbrt(number1);
  cout << cubeRoot << " is cube root" <<endl;
}