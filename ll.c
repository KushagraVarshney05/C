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
void reversal()
{
    struct list *prev = 0;
    struct list *curr = head;
    struct list *nextnode = head;
    while (curr != 0)
    {
        nextnode = nextnode->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;
    }
    head = prev;
    traversal();
}
void insertion()
{
    int posi, value, i = 2;
    struct list *temp;
    printf("enter the position where you want to insert the node");
    scanf("%d", &posi);
    struct list *newnode = (struct list *)malloc(sizeof(struct list));

    printf("enter the value you want to insert \n");
    scanf("%d", &value);
    newnode->data = value;
    newnode->next = 0;
    if (posi == 1)
    {
        newnode->next = head;
        head = newnode;
        count++;
    }
    else if (posi < 1 || posi > count + 1)
    {
        printf("invalid input");
        return;
    }
    else if (posi == count)
    {
        temp = head;
        while (temp->next != 0)
        {
            printf("%d \n", temp->data);
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = 0;
        count++;
    }

    else
    {
        temp = head;
        while (i < posi)
        {
            temp = temp->next;
            i++;
        }

        newnode->next = temp->next;
        temp->next = newnode;
        count++;
    }
    traversal();
}
void deletenode()
{
    int pos, i = 1;
    struct list *temp;
    struct list *prev;
    if (head == 0)
    {
        printf("underflow");
    }
    printf("enter the position you want to delete");
    scanf("%d", &pos);
    if (pos == 1)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            prev = temp;
            temp = temp->next;
            i++;
        }
        prev->next = temp->next;
        free(temp);
    }
    traversal();
}
void main()
{
    int n;
    newlist();
    choice = 1;
    while (choice)
    {
        printf("enter the operattion you want to perform \n 1: for INSEERTION \n 2:for DELETION \n 3:for REVERSAL");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletenode();
            break;
        case 3:
            reversal();
            break;
        }
        printf("enter 1 to perform more operations and o for exit");
        scanf("%d", &choice);
    }
}
