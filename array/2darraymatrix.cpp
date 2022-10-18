#include<iostream>
using namespace std;
int main()
{
    int a[2][3],i,j;
    cout<< "enter the elements of an matrix";
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
    cout<< "the elements of an matrix are"<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
    }
    
    
    
}