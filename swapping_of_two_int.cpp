// WAP in c++ to swap to numbers.

#include <iostream>
using namespace std;

int main() 
{
    int a, b, temp;
    cout<<"Enter the value of two integers : "<<endl;
    cin>>a>>b;
    cout<<"Value of a and b before swapping is...."<<endl;
    cout<<"a = "<<a<<" and "<<"b = "<<b<<endl;
    temp = a;
    a = b;
    b = temp;
    cout<<"Value of a and b after swapping is...."<<endl;
    cout<<"a = "<<a<<" and "<<"b = "<<b<<endl;
    return 0;
}
