#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char data;
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

void push(struct Stack *s, char key)
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
char pop(struct Stack *s)
{
    if (s->top == 0)
    {
        printf("Stack underflow\n");
        return -1;
    }
    char data = s->top->data;
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

char top(struct Stack *s)
{
    return s->top->data;
}
// Program for infix to prefix conversion
int precedence(char ch)
{
    if (ch == '^')
        return 3;
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    return -1;
}
void reverse(char *arr,int l)
{
    int i = 0;
    int j = l-1;
    while(i<=j)
    {
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

}
void infixtoPreFix(char *str)
{
    struct Stack *s = create();
    int l = strlen(str);
    char ans[l];
    int itr = 0;
    for (int i = l-1; i >= 0; i--)
    {
        char ch = str[i];
        if (ch == ')')
            push(s, ch);
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            ans[itr++] = ch;
        else if (ch == '(')
        {
            while (!isEmpty(s) && top(s) != ')')
            {
                ans[itr++] = pop(s);
            }
            pop(s);
        }
        else
        {
            while (!isEmpty(s) && precedence(top(s)) > precedence(ch))
            {
                ans[itr++] = pop(s);
            }
            push(s, ch);
        }
    }
    while (!isEmpty(s))
    {
        ans[itr++] = pop(s);
    }
    reverse(ans,l);
    printf("After converting to prefix : ");
    for(int i = 0;i<l;i++)
    {
        printf("%c",ans[i]);
    }
}
int main()
{
    printf("kushagra Varshney 2125cs1206\n");
    char str[100];
    printf("Enter the infix expression : ");
    gets(str);
    infixtoPreFix(str);
    return 0;
}