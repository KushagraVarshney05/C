#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,ans=0,i=0;
    cin>>n;
    while(n)
    {
        int dig=n%10;
        if(dig==1)
        {
            ans=ans+pow(2,i);

        }
        i++;
        n=n/10;
    }
    cout<<ans<<endl;
}