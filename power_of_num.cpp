// C++ Program to Calculate Power of a Number.

#include<iostream>
using namespace std;

int main()
{
    int num, power, ans=1, i;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"Enter the power : ";
    cin>>power;
    for(i=0; i<power; i++)
    {
        ans = ans*num;
    }
    cout<<"Power is = "<<ans<<endl;
    return 0;
}
