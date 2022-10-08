#include<iostream>
using namespace std;
int main()
{
    int x,n,sum,r,f;
    cout<<"enter the no.";
    cin>>n;
    x=n;
    sum=0;
    while(n!=0)
    {
        r=n%10;
        f=1;
        for(int i=1;i<=r;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        n=n/10;
    }
    if(sum==x)
    cout<<"its a strong";
    else
    cout<<"not a strong";
    return 0;
}