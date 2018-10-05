//Write the program with a function that takes two int parameters and print sum of all even number between them,sum of all odd numbers between themand their squares sum also
#include<iostream>
using namespace std;
//Ask For two numbers
int ask(int a,int b)
{
	cout<<"Enter first number:"<<endl;
	cout<<"Enter second number:"<<endl;
}
int sumEvenNumbers(int firstNu,int secondNu, int sumEven)
{

	//Declare a variable named sum which has initial value zero
	sumEven=0;
	int z=firstNu;
	//Put condition to check whether number is even or odd
	if(firstNu%2==0)
	{
		z=z+2;
		//Use loop to find the required sum
		while(z<secondNu)
		{
			sumEven=sumEven+z;
			z=z+2;
		}
		cout<<"SumEven:"<<sumEven<<endl;
	}
	else
	{
		z=z+1;
		while(z<secondNu)
		{
			sumEven=sumEven+z;
			z=z+2;
		}
		cout<<"SumEven:"<<sumEven<<endl;
	}
}
int sumOddNumbers(int firstNu,int secondNu,int sumOdd)
{

    sumOdd=0;
	int z=firstNu;
	//Put condition to check whether number is even or odd
	if(firstNu%2==0)
	{
		z=z+1;
		//Use loop to find the required sum
		while(z<secondNu)
		{
			sumOdd=sumOdd+z;
			z=z+2;
		}
		cout<<"SumOdd:"<<sumOdd<<endl;
	}
	else
	{
		z=z+2;
		while(z<secondNu)
		{
			sumOdd=sumOdd+z;
			z=z+2;
		}
		cout<<"SumOdd:"<<sumOdd<<endl;
	}
}

int sumSquareEvenNumbers(int firstNu,int secondNu, int sumSquareEven)
{

	//Declare a variable named sum which has initial value zero
	sumSquareEven=0;
	int z=firstNu;
	//Put condition to check whether number is even or odd
	if(firstNu%2==0)
	{
		z=z+2;
		//Use loop to find the required sum
		while(z<secondNu)
		{
			sumSquareEven=sumSquareEven+(z*z);
			z=z+2;
		}
		cout<<"SumSquareEven:"<<sumSquareEven<<endl;
	}
	else
	{
		z=z+1;
		while(z<secondNu)
		{
			sumSquareEven=sumSquareEven+(z*z);
			z=z+2;
		}
		cout<<"SumSquareEven:"<<sumSquareEven<<endl;
	}
}

int sumSquareOddNumbers(int firstNu,int secondNu,int sumSquareOdd)
{
	sumSquareOdd=0;
	int z=firstNu;
	//Put condition to check whether number is even or odd
	if(firstNu%2==0)
	{
		z=z+1;
		//Use loop to find the required sum
		while(z<secondNu)
		{
			sumSquareOdd=sumSquareOdd+(z*z);
			z=z+2;
		}
		cout<<"SumSquareOdd:"<<sumSquareOdd<<endl;
	}
	else
	{
		z=z+2;
		while(z<secondNu)
		{
			sumSquareOdd=sumSquareOdd+(z*z);
			z=z+2;
		}
		cout<<"SumSquareOdd:"<<sumSquareOdd<<endl;
	}
}

int main()
{
	int a,b,sumEven,sumOdd,sumSquareEven,sumSquareOdd;
	ask(a,b);
	cin>>a;
	cin>>b;
	//Call by value
	sumEvenNumbers(a,b,sumEven);
	sumOddNumbers(a,b,sumOdd);
	sumSquareEvenNumbers(a,b,sumSquareEven);
	sumSquareOddNumbers(a,b,sumSquareOdd);
	return 0;
}
