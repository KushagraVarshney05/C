#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 5
struct queue
{
    int front;
    int  rear;
    int arr[max];
};
void enque(struct queue *en, int x)
{
    
    if ((en->rear+1)%max == en->front )
    {
        printf("the queue is full\n");
        return;
    }
    else if (en->front == -1 && en->rear == -1)
    {
        en->front = 0;
        en->rear = 0;
        en->arr[en->rear] = x;
    }
    else
    {
        en->rear= (en->rear+1)%max;
        en->arr[(en->rear)] = x;
    }
}
int deque(struct queue *en)
{
    int temp;
    if (en->front < 0)
    {
        printf("the queue is empty\n");
        return -1;
    }
    
    else if (en->rear == en->front)
    {
        temp = en->arr[en->front];
        en->front = en->rear = -1;
        return temp;
    }
    else
    {
        temp = en->arr[en->front];
        en->front=(en->front+1)%max;
        return temp;
    }
}
void display(struct queue *q)
{
    if (q->front < 0)
    {
        printf("the queue is empty\n");
    }
   
    else
    {
        int i=q->front;

        printf("the elements in queue are\n");
        while(i!=q->rear)
        {
            printf("%d",q->arr[i]);
            i=(i+1)%max;
        }
        printf("%d",q->arr[i]);
       
    }
}
int main()
{
    struct queue s;
    s.front=-1;
    s.rear=-1;
    int choice,n;
     do
    {
        printf("enter your choice\n 1 FOR enqueue\n 2 FOR dequeue \n 3 FOR DISPLAY\n 0 FOR EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        printf("enter the no. you want to push\n ");
        scanf("%d",&n);
            enque(&s,n);
            break;

        case 2:
            n=deque(&s);
            printf("the deleted no. is %d\n",n);
            break;
      
        case 3:
            display(&s);
            break;
        }
    } while (choice);
     return 0;
}