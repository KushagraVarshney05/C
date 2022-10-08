#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("enter the size of array \n");
    scanf("%d", &n);

    int a[n];
    int i, j = 0;
    int temp;
    printf("enter the elements of array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[j] != 0)
        {
            j++;
            continue;
        }
        if (a[j] == 0 && a[i] != 0)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
        if (a[j] == 0 && a[i] == 0)
        {
            continue;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}
