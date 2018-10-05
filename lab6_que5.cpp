/*Write a program that includes the above three (2,3,4) functions. Write a main function that asks user to input 2 variables and asks the user what operation does he want to perform. Based on his input, call the required function and display the output.*/
#include<iostream>
using namespace std;
//write a program that includes sum, maximum and minimum
//finding sum
int func1(int a,int b){
int c=a+b;
return c;
}
//finding maximum
int func2(int a, int b){
if(a>b){
 return a;
  }
else
  return b;
}
//finding minimum
int func3(int a, int b){
if(a<b){
 return a;
  }
else
  return b;
}
//write a main function that asks the user to input 2 variables and what operation he wants to do and accordingly display the output
int main(){
int a,b,i;
cout<<"Enter 2 numbers: ";
cin>>a>>b;
cout<<"to find sum press 1"<<"/n";
cout<<"to find maximum press 2"<<"/n";
cout<<"to find minimum press 3"<<"/n";
//output
cin>>i;
if(i==1)
{
cout<<"sum is:"<<func1(a,b)<<"/n";
}
else if(i==2)
{
cout<<"maximum number is:"<<func2(a,b)<<"/n";
}
else if(i==3)
{
cout<<"minimum number is:"<<func3(a,b)<<"/n";
}
else
cout<<"invalid input";
return 0;
}
