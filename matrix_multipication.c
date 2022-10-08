#include<stdio.h>
#include<conio.h>

int main()
{
    int r1,c1,r2,c2;
    printf("enter the  no. of rows and column of first array ");
    scanf("%d %d",&r1,&c1);
    printf("enter the  no. of rows and column of second array ");
    scanf("%d %d",&r2,&c2);
    if( c1!=r2)
    {
        printf("this multiplication is not possible");
        return 0;
    }
    int x[r1][c1],y[r2][c2],z[r1][c2];
    printf("enter the elements of first array ");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("enter the elements of second array ");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            z[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
            }
        }
    }
    printf("the matrix after multiplication is ");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d %s",&z[i][j],' ');
        }
        printf("\n");
    }

    return 0;
}

