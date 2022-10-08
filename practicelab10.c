
#include <stdio.h>
#include <conio.h>
#include <string.h>

int checkWord(char *str, char *wrd)
{
    int n = strlen(str);
    int m = strlen(wrd);

    int i = 0;
    int j;
    if (m > n)
        return 0;
    int loc;
    while (i < n)
    {
        j = 0;
        while (i < n && j < m && str[i] == wrd[j])
        {
            if (j == 0)
                loc = i;
            ++i;
            ++j;
        }

        if ((i == n || str[i] == ' ') && j == m)
            return loc;

        while (i < n && str[i] != ' ')
        {
            ++i;
        }
        ++i;
    }
    return -1;
}
int main()
{
    printf("Kushagra Varshney 2125cs1206\n");
    char str[100];
    char wrd[100];
    printf("Enter String: ");
    gets(str);

    printf("Enter Word to Search in the String: ");
    gets(wrd);
    int loc = checkWord(str, wrd);
    if (loc != -1&& loc!= 0)
    {
        printf("The word is present in the string at index %d\n", loc);
    }
    else
    {
        printf("The word is not present in string");
    }
}