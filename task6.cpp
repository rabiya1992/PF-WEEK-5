#include <iostream>
using namespace std;

bool evenOrOdd(int number);


main()
{int number;
 bool answer;
 cout << "Enter a number: ";
 cin >> number;
 
 answer = evenOrOdd(number);

 if(answer == true)
 {
  cout << "The given number is even" <<endl;
 }
 
 if(answer == false)
 {
  cout << "The given number is odd" <<endl;
 }


}

bool evenOrOdd(int number)
{int rem1;
 int div1;
 int rem2;
 int div2;
 int rem3;
 int div3;
 int rem4;
 int div4;
 int rem5;
 int remainder;
 
 rem1 = number%10;
 div1 = number/10;
 rem2 = div1%10;
 div2 = div1/10;
 rem3 = div2%10;
 div3 = div2/10;
 rem4 = div3%10;
 div4 = div3/10;
 rem5 = div4%10;

 remainder = rem1 + rem2 + rem3 + rem4 + rem5;

 if(remainder%2 == 0)
 {
   return true;
 }

 if(remainder%2 != 0)
 {
   return false;
 }

return 0;
}