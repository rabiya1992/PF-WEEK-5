#include <iostream>
using namespace std;

main()
{int num;
 string A;
 string a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17;
  
 cout << "Enter a number: ";
 cin >> num; 

 if(num / 10 == 2)
 {
   a1 = " twenty ";
 }
 
 if(num / 10 == 3)
 {
   a2 = " thirty ";
 }

 if(num / 10 == 4)
 {
   a3 = " forty ";
 }

 if(num / 10 == 5)
 {
   a4 = " fifty ";
 }

 if(num / 10 == 6)
 {
   a5 = " sixty ";
 }

 if(num / 10 == 7)
 {
   a6 = " seventy ";
 }

 if(num / 10 == 8)
 {
   a7 = " eighty ";
 }

 if(num / 10 == 9)
 {
   a8 = " ninty ";
 }

 if(num % 10 == 1)
 {
   a9 = " one ";
 }

 if(num % 10 == 2)
 {
   a10 = " two ";
 }
 
 if(num % 10 == 3)
 {
   a11 = " three ";
 }

 if(num % 10 == 4)
 {
   a12 = " four ";
 }

 if(num % 10 == 5)
 {
   a13 = " five ";
 }
 
 if(num % 10 == 6)
 {
   a14 = " six ";
 }

 if(num % 10 == 7)
 {
   a15 = " seven ";
 }

  if(num % 10 == 8)
 {
   a16 = " eight ";
 }
 
  if(num % 10 == 9)
 {
   a17 = " nine ";
 }


A = a1 + a2 + a3 + a4 + a5 + a6 + a7 + a8 + a9 + a10 + a11 + a12 + a13 + a14 + a15 + a16 + a17;
cout << A;


}   