#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

struct list
{
    int data;
    struct list *next;
};
struct list *head = 0,*head2=0;

int choice = 1, count = 0;
void traversal(struct list *head);
void newlist()
{
    printf("create first linked list\n");
    while (choice)
    {
        count++;
        printf("Creating node %d\n", count);
        struct list *newnode = (struct list *)malloc(sizeof(struct list));
        printf("enter data");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = newnode;
        }
        else
        {
            struct list *temp = head;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        printf("do you wannt to continue(0,1)");
        scanf("%d", &choice);
    }
    traversal(head);
    printf("create second linked list \n");
    choice=1;
    count=0;
    while (choice)
    {
        count++;
        printf("Creating node %d\n", count);
        struct list *newnode = (struct list *)malloc(sizeof(struct list));
        printf("enter data");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head2 == 0)
        {
            head2 = newnode;
        }
        else
        {
            struct list *temp = head2;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        printf("do you wannt to continue(0,1)");
        scanf("%d", &choice);
    }
    traversal(head2);
}
void traversal(struct list *head)
{
    struct list *temp = head;
    while (temp != 0)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void concatenation()
{
    struct list *temp = head;
    printf("count is %d \n", count);
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next=head2;
    traversal(head);

}



void main()
{
    int n;
    newlist();
    concatenation();


   
}

