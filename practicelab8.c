#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void palindrome(int arr[], int size)
{
    int result[size];
    int i = 0, j, x = 0, count = 0;
    j = size - 1;
    while (i != j && i < j)
    {
        if (arr[i] < arr[j])
        {
            arr[i + 1] = arr[i + 1] + arr[i];
            i++;
            count++;
        }
        else if (arr[j] < arr[i])
        {
            arr[j - 1] = arr[j - 1] + arr[j];
            j--;
            count++;
        }
        else
        {
            result[x] = arr[i];
            x++;
            i++;
            j--;
        }
    }

    if (i == j)
    {
        result[x] = arr[i];
        printf("no. of operation performed %d \n", count);
        printf("array after operation");
        for (int i = 0; i <= x; i++)
        {
            printf("%d    ", result[i]);
        }
        for (int i = x - 1; i >= 0; i--)
        {
            printf("%d    ", result[i]);
        }
    }
    else if (j < i)
    {
        printf("no. of operation performed %d\n", count);
        printf("array after operation");
        for (int i = 0; i < x; i++)
        {
            printf("%d    ", result[i]);
        }
        for (int i = x - 1; i >= 0; i--)
        {
            printf("%d    ", result[i]);
        }
    }
}

int main()
{
    int n;
    printf("enter the size of array");
    scanf("%d", &n);
    int arr[n];
    printf("enter the array");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    palindrome(arr, n);

    return 0;
}