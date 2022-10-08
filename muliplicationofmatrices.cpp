#include<iostream>
using namespace std;
int main()
{
    int a[2][3],b[2][3],m[2][2],i,j,k;
    cout<<"enter the first matrix"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"enter the first matrix's     "<<i<<"*"<<j<<endl;
            cin>>a[i][j];
        }
    }
    cout<<"enter the second matrix"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"enter the second matrix's      "<<i<<"*"<<j<<endl;
            cin>>b[i][j];
        }
    }
    for ( i = 0; i < 2; i++)
   
    {
        for ( j = 0; j < 2; j++)
        {
            m[i][j]=0;
            for(k=0;k<3;k++)
        {
            m[i][j]=m[i][j]+a[i][k]*b[k][j];
        }
        
        }
    }
    cout<<"the multiplication of matrix is";
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<m[i][j]<<"    ";
        }
        cout<<endl;
    }
    

}
