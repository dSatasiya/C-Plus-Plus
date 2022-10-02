// WAP in c++ to find quotient and remainder.

#include<iostream>
using namespace std;

int main()
{
    int nume, denom, q, r;
    cout<<"Enter the value of numerator : ";
    cin>>nume;
    cout<<"\nEnter the value of denomenator : ";
    cin>>denom;
    q = nume/denom;
    r = nume%denom;
    cout<<"Quotient is : "<<q<<endl;
    cout<<"Remainder is : "<<r<<endl;
    
    return 0;
}
