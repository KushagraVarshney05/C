//Program to find the factorial by recursion
#include<stdio.h>

int factorial(int n)
{
    if(n<=0)
        return 1;
    return n * factorial(n-1);
}
int main()
{
    printf("kushagra Varshney 2125cs1206\n");
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n<0)
        printf("Invalid value\n");
    else
    {
        printf("The factorial of number %d is : %d\n",n,factorial(n));
    }
    return 0;
}