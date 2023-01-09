#include <iostream>
#include <cmath>
using namespace std;

float quadPlus(float a, float b, float c );
float quadMinus(float a, float b, float c);


main()
{float a;
 float b;
 float c;
 float div1;
 float div2;
 cout << "Enter first value of quadratic equation: " ;
 cin >> a;
 cout << "Enter second value of quadratic equation: " ;
 cin >> b;
 cout << "Enter third value of quadratic equation: " ;
 cin >> c;
 
 div1 = quadPlus(a , b, c);
 div2 = quadMinus(a , b, c);

 cout << "Result is " <<div1 <<endl;
 
 cout << "Result is " <<div2 <<endl;

 

}


float quadPlus(float a, float b, float c )
{
  float discriminant1;
  float root1;
  float sum1;
  float division1;
  discriminant1 = (b*b)-(4*a*c);
  root1 = sqrt(discriminant1);
  sum1 = (-b) + (root1);
  division1 = sum1/(2*a);

return division1;

}


float quadMinus(float a, float b, float c)
{
   float discriminant2;
   float root2;
   float sum2;
   float division2;
   discriminant2 = (b*b)-(4*a*c); 
   root2 = sqrt(discriminant2);
   sum2 = (-b) - (root2);
   division2 = sum2 / (2*a);

return division2;

}

  