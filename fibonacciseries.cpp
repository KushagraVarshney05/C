#include<iostream>
using namespace std;
int main()
{
    int a[50] ,i,c;
    cout<<"enter the count";
    cin>>c;
    a[0]=0;
    a[1]=1;
    for(i=2;i<c;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    for(i=0;i<c;i++)
    {
        cout<<endl<<a[i];
    }
}