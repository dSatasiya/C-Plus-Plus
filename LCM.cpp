// C++ Program to Find LCM.

#include<iostream>
using namespace std;

int main()
{
    int a, b, i;
    cout<<"Enter two numbers to find out LCM : ";
    cin>>a>>b;
    for(i=1; ; i++)
    {
        if(i%a==0 && i%b==0)
        {
            printf("The LCM of two given numbers is : %d", i);
            break;
        }
    }
    return 0;
}
