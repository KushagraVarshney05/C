#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

} *head = 0;

void push()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the value you wnat to insert\n");
    scanf("%d", &newnode->data);
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
void pop()
{
    struct node *temp;
    printf("the value that has been popped out is %d \n", head->data);
    temp = head;
    head = head->next;
    free(temp);
}
void peek()
{
    printf("the value at top is %d \n", head->data);
}
void display()
{
    struct node *temp;
    temp = head;
    printf("THE VALUES IN STACK ARE\n");
    while (temp != 0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
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
