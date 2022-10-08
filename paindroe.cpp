#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int x,n,rev,r;
    cout<<"enter the no.";
    cin>>n;
    x=n;
    rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==x)
    cout<<"its a palindrome";
    else
    cout<<"not a palindrome";
    return 0;
}