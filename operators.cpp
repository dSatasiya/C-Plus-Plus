// Operators practice...
#include <iostream>
using namespace std;

int main()
{
    // Arithmetic operators
    int a=15, b=10;
    cout<<"Addition : "<<a<<"+"<<b<<"="<<(a+b)<<endl;
    cout<<"Subtraction : a-b = "<<(a-b)<<endl;
    cout<<"Multiplication : a*b = "<<(a*b)<<endl;
    cout<<"Division : a/b = "<<(a/b)<<endl;
    cout<<"Remainder : a%b = "<<(a%b)<<endl;
    
    // bitwise operators 
    cout<<"------------------------------------"<<endl;
    cout<<"AND operation : a&b = "<<(a&b)<<endl;
    cout<<"OR operation : a|b = "<<(a|b)<<endl;
    cout<<"XOR operation : a^b = "<<(a^b)<<endl;
    cout<<"NOT operation : ~b = "<<(~b)<<endl;
    cout<<"Left shift operation : b<<1 = "<<(b<<1)<<endl;
    cout<<"Right shift operation : a>>1 = "<<(a>>1)<<endl;
    
    return 0;
}   
