#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

struct list
{
    int data;
    struct list *next;
};
struct list *head1 = 0, *head2 = 0;

int choice = 1, count = 0;
void traversal(struct list *head1);
void newlist()
{
    printf("create first linked list \n");
    while (choice)
    {
        count++;
        printf("Creating node %d\n", count);
        struct list *newnode = (struct list *)malloc(sizeof(struct list));
        printf("enter data");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head1 == 0)
        {
            head1 = newnode;
        }
        else
        {
            struct list *temp = head1;
            while (temp->next)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        printf("do you wannt to continue(0,1)");
        scanf("%d", &choice);
    }
    traversal(head1);
    printf("create second linked list\n");
    choice = 1;
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
    printf("count is %d \n", count);
    while (temp != 0)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void merge_two_sorted_linked_list(struct list *head1, struct list *head2)
{
    struct list *head, *temp;
    head = 0;
    temp = 0;

    while (head1 != 0 && head2 != 0)
    {
        if (head1->data <= head2->data)
        {
            if (head == 0)
            {
                head = head1;
                head1 = head1->next;
                temp = head;
            }
            else
            {
                temp->next = head1;
                temp = temp->next;
                head1 = head1->next;
            }
        }
        else
        {
            if (head == 0)
            {
                head = head2;
                head2 = head2->next;
                temp = head;
            }
            else
            {
                temp->next = head2;
                temp = temp->next;
                head2 = head2->next;
            }
        }
    }
    if (head1 == 0)
    {
        temp->next = head2;
    }
    else
    {
        temp->next = head1;
    }
    traversal(head);
}
void main()
{
    int n;
    newlist();
    merge_two_sorted_linked_list(head1,head2);
}