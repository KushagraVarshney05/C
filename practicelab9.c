#include<stdio.h>
#include<conio.h>
void swap(int *a, int*b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n,pos;
    printf("enter the size of array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array");
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=n-1;i>0;i--)
    {
        if(arr[i]>arr[i-1])
        {
            pos=i;
            break;
        }
    }
    int min = pos;
    for(int i = pos;i<n;i++)
    {
        if(arr[i]<arr[min] && arr[i] != arr[pos-1])
        {
            min = i;
        }
    }   
    swap(&arr[pos-1],&arr[min]);
    for(int i=pos;i<n;i++)
    {
        int flag = 1;
        for(int j = pos;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag = 0;
            }
        }
        if(flag)
        {
            break;
        }
    }
    for(int i = 0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}