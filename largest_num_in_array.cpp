// C++ Program to Find Largest Element of an Array.

#include<iostream>
using namespace std;

int main()
{
    int a[5]={85, 25, 63, 14, 9}, i, k, cnt=0;
    for(i=0; i<5; i++)
    {
        for(k=0; k<5; k++)
        {
            if(a[i]>=a[k])
            {
                cnt = cnt+1;
                while(cnt==5)
                {
                    cout<<a[i]<<" is the largest number in the array"<<endl;
                    break;
                }
                continue;
            }
            continue;
        }
    }
    return 0;
}

// 85 is the largest number in the array
