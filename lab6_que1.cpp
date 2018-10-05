//Tax Rate Calculation using Functions
#include<iostream>
using namespace std;
// ask user to enter the values
//Write a function that obtains from the user and returns a value for unitCst, units, and taxRt to the calling module.
int ask (int &a, int &b,int &c)
 	 	{
			 cout<< "enter the units = ";
			 cin>>a;
	 		 cout<< "enter the unitCst = ";
	 		 cin>>b;
	 		 cout<< "enter the taxRt = ";
			 cin>>c;
 	 	}
//Write a function that receives the unitCst, units, and taxRt and returns to the calling module the salesTx and totDue.
 	 	void sat (int& a, int& b,int& c)
 	 	{
	 		 int sat = a*b*c;
	 		 cout<< "salesTax = "<< sat ;
 	 	}
 	 	void total (int& a, int& b,int& c)
 	 	{
	 		 int total = (a*b*c) + (a*b);
	 		 cout<< "totalDue = "<< total ;
 	 	}
//Write a function that receives the unitCst, units, taxRt, salesTax, and totDue and outputs them in a very readable format.
	 	int read (int& a, int& b,int& c)
	 	 {
	 	    cout<< "The unit cost of object is " << b << ". "<<"The number of units are "<< a <<". "<<"The tax rate is "<< c <<". "<<"the sales tax is "<< (a*b*c) <<". "<<"The total is "<<(a*b*c) + (a*b);
	 	 }
//Write a main function with variables called unitCost, unitsPurch, taxRate, salesTax, and totalDue.
//driver function
	    int main ()
	 	{
//call by reference
	 	  	int a,b,c;
			ask(a,b,c);
	 	  	sat(a,b,c);
	 	  	total(a,b,c);
	 	  	read(a,b,c);
//get the values
	 	  	return 0;
		}

