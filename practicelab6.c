#include <stdio.h>
#include <conio.h>
#include <string.h>

void remove_char(int k, char str[])
{
    char result[100];
    int l, x = 0;
    l = strlen(str);
    int i = 0;
    int j = 0;
    while (i < l)
    {

        if (j < k && i + j < l && str[i + j] == str[i])
        {
            j++;
        }
        else if (j == k)
        {
            i = i + j;
            j = 0;
        }
        else
        {

            result[x] = str[i];
            x++;
            i++;
            j = 0;
        }
    }
    printf("the string after removing k consecutive characters:     ");

    printf("%s", result);
}
int main()
{
    char sentence[100];
    int k;
    printf("enter the string:     ");
    scanf("%s", sentence);
    printf("enter the value of k:   ");
    scanf("%d", &k);
    remove_char(k, sentence);
    return 0;
}