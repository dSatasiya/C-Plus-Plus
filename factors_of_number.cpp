// C++ Program to Display Factors of a Number.

#include<iostream>
using namespace std;

int main()
{
    int i, num;
    cout<<"Enter a number to find its factor : ";
    cin>>num;
    for(i=1 ;i<=num; i++)
    {
        if(num%i == 0)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}

// Enter a number to find its factor : 60
// 1 2 3 4 5 6 10 12 15 20 30 60 
