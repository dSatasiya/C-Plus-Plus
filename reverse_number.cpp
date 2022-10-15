// C++ Program to Reverse a Number.

#include<iostream>
using namespace std;

int main()
{
    int num, rem;
    cout<<"Enter the number to reverse : ";
    cin>>num;
    cout<<"The reversed number is..."<<endl;
    while(num != 0)
    {
        rem = num%10;
        cout<<rem;
        num = num/10;
    }
    return 0;
}

// Expected Output : 
// Enter the number to reverse : 9873
// The reversed number is...
// 3789
