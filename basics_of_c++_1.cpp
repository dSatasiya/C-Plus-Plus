// Online C++ compiler to run C++ program online

#include<iostream>
#include<string>
using namespace std;

int main()
{
    const string str = "Dhruv Satasiya";
    cout<<str<<endl;
    const int a=12;
    cout<<a<<endl;
    a<<78;     // This is not allowed as a is initially defined as constant data type. 
    cout<<a<<endl;
}
