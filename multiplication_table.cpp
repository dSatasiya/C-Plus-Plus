// C++ Program to Generate Multiplication Table.

// C++ Program to Generate Multiplication Table.

#include<iostream>
using namespace std;

int main()
{
    int i, num, mul_value=1;
    cout<<"Enter the table number : ";
    cin>>num;
    cout<<"The Multiplication table of given number is.."<<endl;
    for(i=1; i<=10; i++)
    {
        mul_value = num*i;
        cout<<num<< "x" <<i<<" = "<<mul_value<<endl;
    }
    return 0;
}

// Expected output :
// Enter the table number : 21
// The Multiplication table of given number is..
// 21x1 = 21
// 21x2 = 42
// 21x3 = 63
// 21x4 = 84
// 21x5 = 105
// 21x6 = 126
// 21x7 = 147
// 21x8 = 168
// 21x9 = 189
// 21x10 = 210
