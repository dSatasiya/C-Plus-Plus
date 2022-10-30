//C++ Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case

#include<iostream>
using namespace std;

int main()
{
    int add, sub, mul, divi;
    int a, b;
    char op;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    cout<<"Enter an operator : ";
    cin>>op;
    switch(op)
    {
        case '+' : add = a+b;
                 cout<<"Addition = "<<add<<endl;
                break;
        case '-' : sub = a-b;
                 cout<<"Subtraction = "<<sub<<endl;
                 break;
        case '*' : mul = a*b;
                 cout<<"Multiplication = "<<mul<<endl;
                 break;
        case '/' : divi = a/b;
                 cout<<"Division = "<<divi<<endl;
                 break;
        default : cout<<"You have entered wrong operator..";
    }
    return 0;
}

// Enter the value of a and b : 4 2
// Enter an operator : /
// Division = 2
