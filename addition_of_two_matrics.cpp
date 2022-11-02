// C++ Program to Add Two Matrix Using Multi-dimensional Arrays

#include<iostream>
using namespace std;

int main()
{
    int len1, len2, i, j;
    cout<<"Enter the lenght of array 1 : ";
    cin>>len1;
    cout<<"Enter the length of array 2 : ";
    cin>>len2;
    int a[len1][len1], b[len2][len2], add[len1][len1];
    for(i=0; i<len1; i++)
    {
        for(j=0; j<len2; j++)
        {
            cout<<"Enter the element of a["<<i<<"]["<<j<<"] :";
            cin>>a[i][j];
            cout<<"\n";
        }
    }
    for(i=0; i<len1; i++)
    {
        for(j=0; j<len2; j++)
        {
            cout<<"Enter the element of b["<<i<<"]["<<j<<"] :";
            cin>>b[i][j];
            cout<<"\n";
        }
    }
    if(len1 == len2)
    {
        cout<<"Addition of two matrix is..."<<endl;
        for(i=0; i<len1; i++)
        {
            for(j=0; j<len2; j++)
            {
                add[i][j] = a[i][j] + b[i][j];
                cout<<add[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    return 0;
}

// Expected output :
// Enter the lenght of array 1 : 2
// Enter the length of array 2 : 2
// Enter the element of a[0][0] :5
// Enter the element of a[0][1] :5
// Enter the element of a[1][0] :5
// Enter the element of a[1][1] :5
// Enter the element of b[0][0] :2
// Enter the element of b[0][1] :2
// Enter the element of b[1][0] :2
// Enter the element of b[1][1] :2
// Addition of two matrix is...
// 7	7	
// 7	7	
