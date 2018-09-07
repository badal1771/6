/*to draw a particular triangle of a star with specific pattern
*
**
***
****
*****
*/
//library
#include<iostream>
using namespace std;
//main function
int main()
{
// loop
int i, j;
for(i=0; i<5; i++)
{
for(j=0; j<=i; j++)
{
cout<<"*";
}
cout<<"\n";
}
return 0;
}
