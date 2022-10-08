#include<stdio.h>
#include<conio.h>

void convert(char *word,int n)
{
    for(int i = 0;i<n;i++)
    {
        if(word[i]>='a' && word[i]<='z')
        {
            int x = word[i]-'a';
            word[i] = x+'A';
        }
        else
        {
            int x = word[i]-'A';
            word[i] = x+'a';
        }
    }
}
int main()
{
    printf("Kushagra Varshney 2125cs1206\n");
    int n;
    printf("Enter the size of the word : ");
    scanf("%d",&n);
    char word[n];
    printf("Enter the word : ");
    scanf("%s",word);
    printf("The word before operation : %s\n",word);
    convert(word,n);
    printf("The word after conversion : %s",word);
    return 0;
}