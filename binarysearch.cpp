#include<iostream>
using namespace std;
int main()
{
    int a[10],value,pos=-1,beg,end,mid;
    cout <<"enter the elemants of an array";
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    cout<<"enterthe value that youu want to find";
    cin>>value;
    beg=0;
    end=9;
    while(beg<=end)
    {
        mid=(end+beg)/2;
        if(value==a[mid])
        {
            pos=mid+1;
            break;
        }
        else if(value>a[mid])
        beg=mid+1;
        else
        end=mid-1;
    }
    if(pos==-1)
    cout<<"resut not found";
    else
    cout<<"position is"<<pos<<endl;
    return 0;
}
