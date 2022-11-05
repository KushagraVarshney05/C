#include<stdio.h>
#include<stdlib.h>

struct Stack
{
    int top;
    int *arr;
    int capacity;
};

struct Stack* create(int cap)
{
    struct Stack *s = (struct Stack*)malloc(sizeof(struct Stack));
    s->capacity = cap;
    s->top = -1;
    s->arr = (int *)malloc(sizeof(int)*cap);
}

void push(struct Stack *s , int key)
{
    if(s->top == s->capacity-1)
    {
        printf("Stack overflow\n");
        return;
    }
    s->top = s->top+1;
    s->arr[s->top] = key;
}

int pop(struct Stack *s)
{
    if(s->top == -1)
    {
        printf("Stack underflow\n");
        return -1;
    }
    int data =  s->arr[s->top];
    s->top = s->top-1;
    return data;
}

int isEmpty(struct Stack *s)
{
    if(s->top == -1)
        return 1;
    else   
        return 0;
}

int main()
{
    printf("kushagra Varshney 2125cs1206\n");
    printf("Enter the capacity of the stack : ");
    int cap;
    scanf("%d",&cap);
    struct Stack *s = create(cap);
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