#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>
struct node
{
    int data;
    struct node *next;
} *head = 0;


void display(struct node *head)
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

struct node *list()
{
    int choice = 1;
   int  count = 0;
    struct node *new, *temp, *head1 = 0;
    while (choice)
    {
        new = (struct node *)malloc(sizeof(struct node));
        printf("enter the value of %d node", count + 1);
        scanf("%d", &new->data);
        if (head1 == 0)
        {

            head1 = temp = new;
            new->next = head1;
        }
        else
        {
            temp->next = new;
            new->next = head1;
            temp = temp->next;
        }
        printf("press 0 for exit");
        scanf("%d", &choice);
        count++;
    }
    return head1;
}
void concatenation(struct node *head1, struct node *head2)
{
    struct node *temp;
    temp = head1;
    do
    {

        temp = temp->next;

    } while (temp->next != head1);
    temp->next = head2;

    do
    {

        temp = temp->next;

    } while (temp->next != head2);
    temp->next = head1;

    head = head1;
}
int main()
{
    struct node *head1, *head2;
    head = head1;
    printf("enter the first list\n");
    head1 = list();
    printf("enter the second list\n");
    head2 = list();
    concatenation(head1, head2);

    display(head);

    return 0;
}