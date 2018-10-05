#include <iostream>
using namespace std;
int func(int a, int b)
{
    if (a>b){
    return b ;
    }
    else{return a;
    }
}
int main()
{
    int c,d;
    func(c,d);
    cout<<"give two numbers";
    cin>>c>>d;
    cout<<"the smaller number between "<<c<<" and "<<d<<" are :"<<func(c,d)<<"\n";
    return 0;
}

