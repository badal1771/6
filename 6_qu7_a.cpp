//Write a user-defined function toUpper() that returns the uppercase of the inputChar received. Use call-by-value.
#include<iostream>
using namespace std;
//
char toUpper(int x)
{
  int y;
  for(int i=1;i<=32;i++)
{
  if(x==i)
  {
  y=i;
  }
}
char d = char(x-32);
return d;
}
int main()
{
  char a ;
  cout << " Enter Any Alphabet To convert it into lowercase:";
  //inputing a in it
  cin >> a;
  cout << " Uppercase of the entered character is: ";
  int x=int(a);
  cout << toUpper(x);
  return 0;
}
