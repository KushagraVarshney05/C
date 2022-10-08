#include <stdio.h>
#include <string.h>
#include <conio.h>

int countWord(char *par)
{
    int count = 0;
    int end = 0;
    int l = strlen(par);
    while (end <= l)
    {
        if (par[end] == ' ' || par[end] == '.' || par[end] == '\0')
        {
            count++;
        }
        end++;
    }
    return count;
}
int main()
{
    char str[250];
    int count;
    printf("kushagra Varshney 2125cs1206\n");
    printf("enter the paragrabh with max character count 250");
    gets(str);
    count = countWord(str);
    printf("no. of words in paragraph is %d", count);
    return 0;
}