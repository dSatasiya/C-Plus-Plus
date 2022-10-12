// C++ Program to Check Whether a character is Vowel or Consonant.

#include<iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter a small-case character : ";
    cin>>c;
    
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        cout<<"The given character is vowel...";
    }
    else
    {
        cout<<"The given character is consonant...";
    }
    return 0;
}
