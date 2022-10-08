#include<iostream>
using namespace std;
int main()
{
    int a[6],sum,avg,i;
    cout<<"enter the six elements of array";
    for ( i = 0; i < 6; i++)
    {
        cin>>a[i];
    }
    sum=0;
    for ( i = 0; i < 6; i++)
    {
        sum=sum+ a[i];
    }
    avg=sum/i;
    cout<<"avg is"<<avg;
    return 0;
}