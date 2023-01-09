#include <iostream>
using namespace std;

bool isSymmetrical(int input);

main()
{int input;
 bool answer;

 cout << "Enter a number: ";
 cin >> input;

 answer = isSymmetrical(input);

 
 
 if (answer == true)
 { 
  cout << "The given number is symmetrical" <<endl ;
 }

 if (answer == false )
 {
  cout << "The given number is not symmetrical " <<endl ;
 } 





}


bool isSymmetrical(int input)
{
 
 int rem1;
 int div1;
 int rem2;
 int div2;
 int rem3;

 rem1 = input % 10;
 div1 = input / 10;
 rem2 = div1 % 10;
 div2 = div1 / 10;
 rem3 = div2 % 10;

 if (rem1 == rem3)
 {
   return true;
 }
 
 if (rem1 != rem3)
 {
   return false;
 }
 
 return 0;
}
