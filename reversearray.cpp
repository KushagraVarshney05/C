#include<iostream>
using namespace std;
int main()
{
    int a[6],i,j,t;
    cout<<"enter the array";
    for ( i = 0; i < 6; i++)
    {
        cin>>a[i];
        /* code */
    }
    for ( i = 0,j=5; i < 6/2; i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    for ( i = 0; i < 6; i++)
    {
        cout<<"          "<<a[i];
        /* code */
    }
    
}