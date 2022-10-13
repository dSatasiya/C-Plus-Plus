// C++ Program to Calculate Sum of Natural Numbers.

#include<iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    cout<<"The value of sum is = "<<sum<<endl;
    return 0;
}
