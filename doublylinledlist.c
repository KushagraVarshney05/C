#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
struct list
{
    int data;
    struct list *next;
    struct list *prev;
};
struct list *head = 0, *newnode, *temp, *tail, *vol;

int choice = 1, count = 0;
void display(void)
{
    temp = head;
    printf("TOTAL NO. NODES ARE  %d \n", count);
    while (temp != 0)
    {
        printf("%d \n", temp->data);
        temp = temp->next;
    };
}
void insertatbeg(int x)
{
    newnode = (struct list *)malloc(sizeof(struct list));
    temp = head;
    head = newnode;
    newnode->next = temp;
    temp->prev = newnode;
    newnode->prev = NULL;
    newnode->data = x;
}
void insertatend(int x)
{
    newnode = (struct list *)malloc(sizeof(struct list));
    newnode->next = NULL;
    newnode->prev = tail;
    tail->next = newnode;
    tail = newnode;
}
int insertion()
{
    int pos, value, i = 2;
    printf("enter the position where you want to insert ");
    scanf("%d", &pos);
    if (pos <= 0 || pos > count + 1)
    {
        printf("invalid position");
        return 0;
    }
    printf("enter the value you  want to be inserted");
    scanf("%d", &value);

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
        while (i < pos)
        {

            temp = temp->next;
            i++;
        }
        newnode = (struct list *)malloc(sizeof(struct list));
        newnode->next = temp->next;
        newnode->prev = temp;
        temp->next = temp->next->prev = newnode;
        newnode->data = value;
    }
    count++;
    display();
    return 0;
}
void reverse(void)
{
    temp = tail;
    tail = head;
    head = temp;
    for (int i = 1; i <= count; i++)
    {
        vol = temp->prev;
        temp->prev = temp->next;
        temp->next = vol;
        temp = temp->next;
    }
    temp = head;
    while (temp != 0)
    {
        printf("REVERSED LINKED LIST IS\n");
        printf("%d \n", temp->data);
        temp = temp->next;
    }
    temp = head;
}
void deletionatbeg()
{
    temp = head;
    head = temp->next;
    printf("the value that deleted is %d", temp->data);
    free(temp);
}
void deletionatend()
{
    temp = tail;
    tail= temp->prev;
    tail->next=0;
    printf("the value that deleted is %d", temp->data);
    free(temp);
}
void deletion(void)
{
    int pos, value, i = 1;
    printf("enter the position you want to delete");
    scanf("%d", &pos);
    if (pos <= 0 || pos > count)
    {
        printf("underflow OR wrong position");
        return;
    }
    if (pos == 1)
    {
        deletionatbeg();
    }
    else if (pos == count)
    {
        deletionatend();
    }
    else
    {
        temp=head;
        while (i < pos)
        {
            temp=temp->next;
            i++;

        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        printf("the value that deleted is %d",temp->data);
        free(temp);
    }
    count--;
    display();
}

void main()
{

    while (choice)
    {
        newnode = (struct list *)malloc(sizeof(struct list));
        printf("enter data");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        newnode->prev = 0;
        if (head == 0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
        printf("do you wannt to continue(0,1)");
        scanf("%d", &choice);
        count++;
    }

    //insertion();
    //reverse();
    deletion();
}
