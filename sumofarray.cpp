#include<iostream>
using namespace std;
int main()
{
    int a[5],sum,c;
    cout<<"enter the 5 no. of array";
    for ( int i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    sum=0;
    for(int y=0; y<5;y++)
    {
        sum=sum+a[y];
    }
    cout<<"sum of array is"<<sum;
    return 0;
}