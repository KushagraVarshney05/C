#include<iostream>
using namespace std;
int main()
{
    int n,i,sum;
    cout<<"enter a no.";
    cin>>n;
    sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=(sum+i);
        }
    }
    if(n==sum)
    cout<<"no. is perfect";
    else
    cout<<"no. is not perfect";
}
