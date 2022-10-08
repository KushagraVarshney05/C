#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
struct node
{
    int data;
    struct node *next;
} *head = 0;

int count = 0, deletedvalue;
void display()
{
    struct node *temp;
    int i = 1;
    temp = head;
    do
    {
        printf("the value of %d node is %d\n", i, temp->data);
        i++;
        temp = temp->next;

    } while (temp != head);
}
void delete_firstnode()
{
    struct node *temp, *last;
    temp = last = head;
    while (last->next != head)
    {
        last = last->next;
    }
    head = temp->next;
    last->next = temp->next;
    deletedvalue = temp->data;
    free(temp);
}
void delete_lastnode()
{
    struct node *temp, *last;
    temp = last = head;
    while (last->next != head)
    {
        temp = last;
        last = last->next;
    }
    temp->next = head;
    deletedvalue = last->data;
    free(last);
}
void deletion()
{
    if (head == 0)
    {
        printf("underflow");
        return;
    }
    int pos;
    printf("enter the position of node you want to delete");
    scanf("%d", &pos);
    if (pos > count)
    {
        printf("deletion is not possible");
        return;
    }
    if (pos == 1)
    {
        delete_firstnode();
    }
    else if (pos == count)
    {
        delete_lastnode();
    }
    else if (pos < count)
    {
        int i = 1;
        struct node *temp, *prev;
        temp = prev = head;
        while (i < pos)
        {
            prev = temp;
            temp = temp->next;
            i++;
        }
        prev->next = temp->next;
        deletedvalue = temp->data;
        free(temp);
    }
    count--;
    printf("deleted value is %d", deletedvalue);
    display();
}

void insertatend(int value)
{
    struct node *temp, *new;
    temp = head;
    new = (struct node *)malloc(sizeof(struct node));
    while (temp->next != head)
    {
        temp = temp->next;
    }
    new->data = value;
    new->next = head;
    temp->next = new;
    printf("insert at end ");
}
void insertatbeg(int value)
{

    struct node *temp, *new;
    temp = head;
    new = (struct node *)malloc(sizeof(struct node));
    while (temp->next != head)
    {
        temp = temp->next;
    }
    new->data = value;
    new->next = head;
    head = new;
    temp->next = new;
}
void insertion()
{
    int pos, i = 2, value;
    struct node *temp, *new;

    printf("enter the value you want to insert");
    scanf("%d", &value);
    printf("enter the position where you want to insert");
    scanf("%d", &pos);
    if (pos == 1)
    {
        insertatbeg(value);
    }
    else if (pos == count + 1)
    {
        insertatend(value);
    }
    else
    {
        temp = head;
        new = (struct node *)malloc(sizeof(struct node));
        while (i < pos)
        {
            temp = temp->next;
        }
        new->data = value;
        new->next = temp->next;
        temp->next = new;
    }
    count++;
    display();
}

void list()
{
    int choice = 1;
    struct node *new, *temp;
    while (choice)
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("enter the value of %d node", count + 1);
        scanf("%d", &new->data);
        if (head == 0)
        {

            head = temp = new;
            new->next = head;
        }
        else
        {
            temp->next = new;
            new->next = head;
            temp = temp->next;
        }
        printf("press 0 for exit");
        scanf("%d", &choice);
        count++;
    }
}
int main()
{
    int temp = 1, value;
    list();
    while (temp)
    {
        printf("Enter the choice\n 1: for INSERTION\n 2: for DELETION");
        scanf("%d", &value);
        if(value==1)
        insertion();
        else if (value==2)
        deletion();
        else
        printf("wrong input");
        printf("PRESS 1 TO CONTIUE/0 FOR EXIT");
        scanf("%d", &temp);
    }

    return 0;
}