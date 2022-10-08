#include<iostream>
using namespace std;
int main()
{
    int a[2][3],b[2][3],c[2][3], i,j;
    cout<< "enter the elements of 1st matrix"<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
        
    }
     cout<< "enter the elements of 2nd matrix"<<endl;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cin>>b[i][j];
        }
        
    }
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
        
    }
    cout<<"the addition of matrix is";
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            cout<<c[i][j]<<"    ";
        }
        cout<<endl;
    }


}