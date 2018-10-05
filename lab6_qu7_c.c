#include <iostream>
using namespace std;
char toLower(int a)
{
  int b;
  for(int i=65;i<=90;i++)
{
  if(a==i)
  {
  b=i;
  }
}
char d=char(a+32);
return d;
}
char toUpper(int a)
{
  int b;
  for(int i=97;i<=122;i++)
{
  if(a==i)
  {
  b=i;
  }
}
char d=char(a-32);
return d;
}
int main()
{
  int x;

  char y;
  cout<<"\n Enter Any Alphabet To convert it into EITHER INTO in lowercase or uppercase:";
  cin>>y;
  x=int();
  if(x>=97&&x<=122)
  {
   cout<<"\n Uppercase of the entered character is: ";
   int a=int(y);
   cout<<toUpper(a);
 }
  else
  {
   cout<<"\n lowercase of the entered character is: ";
   int a=int(y);
   cout<<toLower(a);
 }

   return 0;
}
