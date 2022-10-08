#include<iostream>
using namespace std;
int main()
{
    int a[5],value,t,i,j;
    cout <<"enter the elemants of an array";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4-i; j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
        
    }
    cout<<"after sorting"<<endl;
    for ( i = 0; i < 5; i++)
    {
        cout<<"     "<<a[i];
    }
    
}