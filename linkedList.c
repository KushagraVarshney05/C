#include<stdio.h>
#include<conio.h>

struct node
{
    int data;
    struct node *next;
}*head = 0;

int count = 0;
void create()
{

}
void insertAtBeg(int *value)
{
    struct node *n = (struct node*)malloc(sizeof(struct node));
    n->next = head;
    head = n;
}
void insertAtEnd(int *value)
{
    struct node *n = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;
    while(temp->next)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = 0;
}
void insertAtPostion()
{
    int pos,value,i = 2;
    if(pos == 1)
        insertAtBeg(&value);
    else if(pos == count)
        insertAtEnd(&value);
    else 
    {
        struct node *n = (struct node*)malloc(sizeof(struct node));
        n->data = value;
        struct node *temp = head;
        while(i<pos)
        {
            temp = temp->next;
            i++;
        }
        n->next = temp->next;
        temp->next = n;
    }
}
int main()
{

}