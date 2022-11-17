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
// void display()
// {
//     struct node *temp;
//     temp = head;
//     printf("THE VALUES IN STACK ARE\n");
//     while (temp != 0)
//     {
//         printf("%c\n", temp->data);
//         temp = temp->next;
//     }
// }
int is_empty()
{
    if (head == NULL)
    {
        return 1;
    }
    else
        return 0;
}
int match(char a, char b)
{
    if (a == '{' && b == '}' || a == '[' && b == ']' || a == '(' && b == ')')
    {
        return 1;
    }
    else
        return 0;
}
int check_expression(char *str)
{

    int l = strlen(str);

    for (int i = 0; i < l; i++)
    {
        if (str[i] == '{' || str[i] == '[' || str[i] == '(')
        {

            push(str[i]);
        }
        else if (str[i] == '}' || str[i] == ']' || str[i] == ')')
        {
            if (head == NULL)
            {

                return 0;
            }
            else
            {
                char a = pop();
                if (match(a, str[i]) == 0)
                {

                    return 0;
                }
            }
        }
    }
    if (head == NULL)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}

int main()
{

    char str[100];
    printf("Enter the infix expression : ");
    gets(str);

    if (check_expression(str) == 1)
    {
        printf("the expression is balanced");
    }
    else
    {
        printf("the expression is not balanced");
    }

    return 0;
}
