#include <stdio.h>
#include <string.h>
#include <conio.h>

int palindrome_string(char *str)
{
    int l;
    l = strlen(str);
   
    int i = 0;
    int j = l - 1;
    while (i <= j)
    {
        if (str[i] != str[j])
        {

            return 1;
        }
        i++;
        j--;
    }
    return 0;
}

int main()
{
    char str[100];
    int flag;

    printf("kushagra Varshney 2125cs1206\n");
    printf("enter the string");
    scanf("%s", str);
    flag = palindrome_string(str);
    if (flag == 0)
        printf("the string is palindrome");
    else
        printf("the string is not palindrome");
}