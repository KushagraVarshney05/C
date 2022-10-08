#include <stdio.h>
#include <conio.h>
#define N 5
int stack[N];
int top = -1;
void push()
{

    if (top == N - 1)
    {
        printf("overflow \n");
        return;
    }
    int x;
    printf("enter the value you want to push\n");
    scanf("%d", &x);
    top++;
    stack[top] = x;
}
void pop()
{
    if (top < 0)
    {
        printf("underflow \n");
        return;
    }
    printf("the value that has been popped out is %d \n", stack[top]);
    top--;
}
void peek()
{
    printf("the top most element is %d\n", stack[top]);
}
void display()
{
    int i;
    printf("the values in stack are:\n");
    for (i = top; i >= 0; i--)
    {
        printf("%d /n",stack[i]);
    }
    printf("\n");
}
int main()
{
    int choice;
    do
    {
        printf("enter your choice\n 1 FOR PUSH\n 2 FOR POP \n 3 FOR PEEK\n 4 FOR DISPLAY\n 0 FOR EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        }
    } while (choice);
     return 0;
}
