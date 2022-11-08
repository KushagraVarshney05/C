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
struct list *splitting()
{
    struct list *temp = head, *temp2;
    int split = count / 2;
    while (split--)
    {
        temp2 = temp;
        temp = temp->next;
        
    }
    if (count % 2 != 0)
    {   temp2 = temp;
        temp = temp->next;
    }
    
            temp2->next = 0;
        

    return temp;
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

void main()
{
    int n;
    newlist();
    printf("kjdshf \n");
    struct list *head2 = splitting();
    printf("first half of linked list is \n");
    traversal(head);
    printf("second half of linked list is \n");
    traversal(head2);

}
