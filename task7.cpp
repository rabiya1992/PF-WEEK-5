#include <iostream>
using namespace std;


int hourGreater(int totalMin);
int greaterMin(int totalMin );


main()
{
 int hours;
 int min;
 int totalMin;
 int answer1;
 int answer2;


 cout << "Enter time in hour: ";
 cin >> hours;
 cout << "Enter time in minute: ";
 cin >> min;

 totalMin = (hours * 60)+ min + 15;

 
 answer1 = hourGreater(totalMin);
 answer2 = greaterMin(totalMin );

 
 cout << answer1 << " : " << answer2; 

}



    

int hourGreater(int totalMin)
{
 int hour;
 hour = (totalMin / 60) % 24;
 return hour;
} 

  
int greaterMin(int totalMin )
{ 
  int minute;
  minute = (totalMin % 60);
  return minute;
} 