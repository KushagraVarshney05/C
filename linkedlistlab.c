#include<stdlib.h>
#include<stdio.h> 
#include<conio.h>
#include<math.h>

struct list{
int data;
struct list *next;
};
int main()
{
    struct list *head, *newnode, *temp;
    head=0;
    int choice=1,count=0;
    while(choice)
    {
        newnode=(struct list*)malloc(sizeof(struct list));
        printf("enter data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you wannt to continue(0,1)");
        scanf("%d",&choice);
        count++;
    }
    temp=head;
    printf("count is %d \n",count);
    while(temp!=0)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
 
     return 0;
}
