//C++ Program to Calculate Average of Numbers Using Arrays.

#include<iostream>
using namespace std;

int main()
{
    int avg, len, sum = 0;
    cout<<"Enter the lenght of an array : ";
    cin>>len;
    int arr[len], i;
    for(i=0; i<len; i++)
    {
        cout<<"Enter the "<<i<<" element : ";
        cin>>arr[i];
        sum = sum + arr[i];
    }
    avg = sum/len;
    cout<<"Average of the all array elements is : "<<avg<<endl;
    return 0;
}
