#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define STACKSIZE 100
struct stack
{
    int top;
    int arr[STACKSIZE];
};
void push(struct stack *ps, int x)
{
    if (ps->top == STACKSIZE - 1)
    {
        printf("overflow");
        return;
    }
    else
    {
        ps->arr[++ps->top] = x;
    }
}
int pop(struct stack *ps)
{
    int temp;
    if (ps->top == -1)
    {
        printf("underflow");
        return -1;
    }
    else
    {
        temp = ps->arr[ps->top];
        ps->top--;
        return temp;
    }
}
// bool isempty(struct stack *ps)
// {
//     return (ps->top == -1) ? true : false;
// }
int isempty(struct stack *ps)
{
    return (ps->top == -1) ? 1 : 0;
}
void printNGE(int arr[], int n)
{
    struct stack s;
    int element, next;
    s.top = -1;
    push(&s, arr[0]);
    for (int i = 1; i < n; i++)
    {
        next = arr[i];
        if (isempty(&s)!= 1)
        {
            element = pop(&s);
            while (element < next)
            {
                printf("the next greater element of %d is %d\n", element, next);
                if (isempty (&s)!= 1)
                {
                    element = pop(&s);
                }
                else
                    break;
            }
            if (element > next)
            {
                push(&s, element);
            }
        }
        push(&s, next);
    }
    while (isempty(&s) == 0)
    {
        element=pop(&s);
        next=-1;
        printf("the next greater element of %d is %d\n",element,next);
    }
}
int main()
{
    int arr[]={4,5,2,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    printNGE(arr,n);
    return 0;


}