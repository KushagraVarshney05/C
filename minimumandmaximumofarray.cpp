#include<iostream>
using namespace std;
int main()
{
    int a[5],min,max,i;
    cout <<"enter the elemants of an array";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(min>a[i])
        min=a[i];
        if(max<a[i])
        max=a[i];
    }
    cout<<"minnimmum no. is "<<min<<endl;
    cout<<"maximum no. is"<<max<<endl;        
}