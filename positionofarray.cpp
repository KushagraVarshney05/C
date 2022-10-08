#include<iostream>
using namespace std;
int main()
{
    int a[10],value,pos=-1,i;
    cout <<"enter the elemants of an array";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"enterthe value that youu want to find";
    cin>>value;
    for(i=0;i<10;i++)
    {
        if(value==a[i])
        {
        pos=i+1;
        cout<<"poition is"<<pos<<endl;
        }
    }
    if(i==-1)
    cout<<"value not found";
    //else
    //cout<<"position of that array is"<<pos;
    return 0;
} 