#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

struct list
{
    int data;
    struct list *next;
};
struct list *head = 0;

int choice = 1, count = 0;
void newlist()
{
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
}
void traversal()
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
void pairwiseswap()
{
    struct list *first, *second;
    int temp;
    first = head;
    second = head->next;
    while (first != 0 && second != 0&&second->next!=0)
    {

        temp = first->data;
        first->data = second->data;
        second->data = temp;
        first = first->next->next;
        second = second->next->next;
    }
    traversal();
}

void main()
{
    int n;
    newlist();
    printf("data before reversal");
    traversal();
    printf("data after pair wise reversal");
    pairwiseswap();
}
