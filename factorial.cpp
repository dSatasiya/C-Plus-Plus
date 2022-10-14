// C++ Program to Find Factorial.

#include<iostream>
using namespace std;

int main()
{
    int i, num, fact=1;
    cout<<"Enter the number upto which you want to find a factorial : ";
    cin>>num;
    for(i=1; i<=num; i++)
    {
        fact = fact*i;
    }
    cout<<"Factorial is : "<<fact<<endl;
    return 0;
}
