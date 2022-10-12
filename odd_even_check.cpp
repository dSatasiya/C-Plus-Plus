// C++ Program to Check Whether Number is Even or Odd.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    if(num%2==0)
    {
        cout<<"The given number "<< num <<" is even..."<<endl;
    }
    else
    {
        cout<<"The given number "<<num<<" is odd..."<<endl;
    }
    return 0;
}
