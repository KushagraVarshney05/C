#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
int n=3;
char a[3];
void binary(int n)
{
    if(n<1)
    {
        printf("%s \n",a);
    }
    else
    {
        a[n-1]='0';
        binary(n-1);
        a[n-1]='1';
        binary(n-1);


    }
    


}
int main()
{
    
    binary(n);
    return 0;
}
