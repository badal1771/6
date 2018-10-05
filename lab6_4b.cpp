#include<iostream>
using namespace std;
void func2(int a, int b,int &c){
if(a<b)
   {
   c=a;
   }
else
   c=b;
}
//display of minimum number
int main(){
int a,b,c;
cout<<"Enter two numbers: ";
cin>>a>>b;
func2(a,b,c);
cout<<"the number between "<< a << " and " << b << " are minimum is : "<< c<<endl;
}
