
#include <stdio.h>

int main()
{

    printf("kushagra Varshney 2125cs1206\n");

    int n, m;
    printf("Enter the size of set A : ");
    scanf("%d", &n);
    printf("Enter the size of set B : ");
    scanf("%d", &m);
    char A[n], B[m];
    printf("Enter the element of set A : \n");
    for (int i = 0; i < n; i = i + 1)
    {

        scanf("%s", &A[i]);
    }
    printf("Enter the element of set B : \n");
    for (int i = 0; i < m; i++)
    {
        ;
        scanf("%s", &B[i]);
    }
    printf("the cartesian product of set A and set B:");
    printf("{");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("(%c,%c)", A[i], B[j]);
            if(i < n - 1)
                printf(",");
        }
    }
    printf("}");
    return 0;
}
