#include <iostream>
using namespace std;

void letters(char user);

main()
{
 char user;
 cout << "Enter a letter: ";
 cin >> user;

 letters(user);

}

void letters(char user)
{
  if(user == 'A')
  {
    cout << "You have entered Capital A";
  }
 
  if(user == 'a')
  {
    cout << "You have entered small a";
  }

}