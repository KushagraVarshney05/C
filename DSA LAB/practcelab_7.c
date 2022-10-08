#include <stdio.h>
#include <conio.h>

int main()
{
    int n, x, y, p;
    printf("emter the size of array \n");
    scanf("%d", &n);
    int arr[n], sum[n], b[n][n], temp, count[n];
    printf("enter the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    y = 0;
    x = 0;
    temp = 0;
    sum[0] = 0;
    count[0] = 0;
    for (int i = 0; i < n; i++)
    {

        if (temp <= arr[i])
        {
            b[x][y] = arr[i];
            y++;
            temp = arr[i];
            count[x]++;
            sum[x] = sum[x] + arr[i];
        }
        else
        {

            temp = 0;
            x++;
            sum[x] = 0;
            count[x] = 0;
            y = 0;
            i--;
        }
    }
    temp = sum[0];
    for (int i = 1; i < x; i++)
    {
        if (temp < sum[i])
        {

            p = i;

            temp = sum[i];
        }
    }
    printf("%d (",sum[p]);
    for (int i = 0; i < count[p]; i++)
    {
            printf("%d +",b[p][i]);
    }
    printf(")");
    return 0;
   
}