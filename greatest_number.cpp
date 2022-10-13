//C++ Program to Find Largest Number Among Three Numbers.

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"Number a="<<a<<" is greatest"<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"Number b="<<b<<" is greatest"<<endl;
    }
    else if(c>a && c>b)
    {
        cout<<"Number c="<<c<<" is greatest"<<endl;
    }
    return 0;
}
