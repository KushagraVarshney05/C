#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Stack
{
    struct Node *top;
};

struct Stack *create()
{
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->top = 0;
}

void push(struct Stack *s, int key)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->next = 0;
    n->data = key;
    if (s->top == 0)
    {
        s->top = n;
    }
    else
    {
        n->next = s->top;
        s->top = n;
    }
}
int pop(struct Stack *s)
{
    if (s->top == 0)
    {
        printf("Stack underflow\n");
        return -1;
    }
    int data = s->top->data;
    struct Node *temp = s->top;
    s->top = temp->next;
    free(temp);
    return data;
}

int isEmpty(struct Stack *s)
{
    if (s->top == 0)
        return 1;
    else
        return 0;
}

// Program for Postfix Evaluation
void postfixEvaluation(char *str)
{
    struct Stack *s = create();
    int l = strlen(str);
    for (int i = 0; i < l; i++)
    {
        char ch = str[i];
        if (isdigit(ch))
        {
            int val = ch-48;
            push(s,val);
        }
        else
        {

            int op1 = pop(s);
            int op2 = pop(s);
            int res;
            switch (ch)
            {
            case '+':
            {
                res = op2 + op1;
                break;
            }
            case '-':
            {
                res = op2 - op1;
                break;
            }
            case '*':
            {
                res = op2 * op1;
                break;
            }
            case '/':
            {
                res = op2 / op1;
                break;
            }
            }
            push(s,res);
        }
    }
    printf("The result of the postfix expression %s is : %d\n",str,pop(s));
}
int main()
{
    printf("kushagra Varshney 2125cs1205\n");
    char str[100];
    printf("Enter the postfix expression for evaluation : ");
    scanf("%s",&str);
    postfixEvaluation(str);
    return 0;
}