
/*
draw the following triangle
*
**
* *
*  *
*****
*/
// library
#include<iostream>
using namespace std;
//main function
int main(){
 // loop
for (int i= 0 ; i < 5 ; i++)
{
	// using if condition
	if (i == 0||i == 1||i== 5-1)
	{
		// writing loop in a loop
		for (int j = 0 ; j < (i+1) ; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	// using else condition
	else
	{
		cout<<"*";
		// loop
		for(int j = 0 ; j<( i-1) ; j++)
		{
		cout << " ";
		}
		cout << "*";
		cout<<endl;
	}
}
return 0;
}
