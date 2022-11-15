#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char data;
    struct node *next;

} *head = 0;

void push(char a)
{

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));

    newnode->data = a;
    if (head == 0)
    {
        head = newnode;
        newnode->next = 0;
    }
    else
    {
        newnode->next = head;
        head = newnode;
    }
}
char pop()
{

    struct node *temp;
    char pop = head->data;
    temp = head;
    head = head->next;
    free(temp);
    return pop;
}
char peek()
{
    return head->data;
}
void display()
{
    struct node *temp;
    temp = head;
    printf("THE VALUES IN STACK ARE\n");
    while (temp != 0)
    {
        printf("%c\n", temp->data);
        temp = temp->next;
    }
}
int is_empty()
{
    if (head == NULL)
    {
        return 1;
    }
    else
        return 0;
}
// int match(char a, char b)
// {
//     if (a == '{' && b == '}' || a == '[' && b == ']' || a == '(' && b == ')')
//     {
//         return 1;
//     }
//     else
//         return 0;
// }
int check_palindrome(char *str)
{

    int l = strlen(str);
    int i, mid = l / 2;

    for (i = 0; i < mid; i++)
    {
        push(str[i]);
    }

    if (l % 2 != 0)
    {
        i++;
    }

    while (i < l)
    {

        char a = pop();

        if (a != str[i])
        {
            return 0;
        }
        i++;
    }

    return 1;
}

int main()
{

    char str[100];
    printf("Enter the string or number");
    gets(str);

    if (check_palindrome(str) == 1)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }

    return 0;
}