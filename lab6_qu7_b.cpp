/*Write a user-defined function toLower() that returns the lowercase of the inputChar received. Use call-by-value.*/
#include<iostream>
using namespace std;

char toLower(int a)
{
  int b;
  for(int i=65;i<=90;i++)
{
  if(a==i)
  {b=i;}
}
char d=char(a+32);
return d;}
int main()
{
  char c;
  cout<<"\n Enter Any Alphabet To convert it into lowercase:";
  cin>>c;
  cout<<"\n lowercase of the entered character is: ";
  int a=int(c);
  cout<<toLower(a);
  return 0;
}

