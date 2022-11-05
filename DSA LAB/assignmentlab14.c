#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Stack
{
    struct Node *top;
};

struct Stack* create()
{
    struct Stack *s = (struct Stack*)malloc(sizeof(struct Stack));
    s->top = 0;
}

void push(struct Stack *s , int key)
{
   struct Node *n = (struct Node *)malloc(sizeof(struct Node));
   n->next = 0;
   n->data = key;
   if(s->top == 0)
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
    if(s->top == 0)
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
    if(s->top == 0)
        return 1;
    else   
        return 0;
}

int main()
{
    printf("kushagra Varshney 2125cs1206\n");
    struct Stack *s = create();
    push(s,10);
    push(s,20);
    printf("%d ",pop(s));
    push(s,5);
    push(s,9);
    printf("%d ",pop(s));
    printf("%d ",pop(s));
    printf("%d ",pop(s));
    return 0;
}