#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define max 5
struct queue
{
    int front;
    int rear;
    int arr[max];
};
void enquefront(struct queue *en, int x)
{

    if ((en->rear + 1) % max == en->front)
    {
        printf("the queue is full\n");
        return;
    }
    else if (en->front == -1 && en->rear == -1)
    {
        en->front = 0;
        en->rear = 0;
        en->arr[en->front] = x;
    }
    else if(en->front==0)
    {
        en->front=4;
        en->arr[(en->front)] = x;

    }
    else
    {
        en->front = (en->front - 1) % max;
        en->arr[(en->front)] = x;
    }
}
void enquerear(struct queue *en, int x)
{

    if ((en->rear + 1) % max == en->front)
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
        en->rear = (en->rear + 1) % max;
        en->arr[(en->rear)] = x;
    }
}
int dequefront(struct queue *en)
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
        en->front = (en->front + 1) % max;
        return temp;
    }
}
int dequerear(struct queue *en)
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
    else if(en->rear==0)
    {
        temp = en->arr[en->rear];
        en->rear=4;
        return temp;
        

    }
    else
    {
        temp = en->arr[en->rear];
        en->rear = (en->rear - 1) % max;
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
        int i = q->front;

        printf("the elements in queue are\n");
        while (i != q->rear)
        {
            printf("%d", q->arr[i]);
            i = (i + 1) % max;
        }
        printf("%d", q->arr[i]);
    }
}
int main()
{
    struct queue s;
    s.front = -1;
    s.rear = -1;
    int choice, n;
    do
    {
        printf("enter your choice\n 1 FOR enqueuerear\n 2 FOR dequeuefront \n 3 FOR enqueuefront\n 4 FOR dequeuerear \n 5 FOR DISPLAY\n 0 FOR EXIT\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the no. you want to push\n ");
            scanf("%d", &n);
            enquerear(&s, n);
            break;

        case 2:
            n = dequefront(&s);
            printf("the deleted no. is %d\n", n);
            break;
        case 3:
            printf("enter the no. you want to push\n ");
            scanf("%d", &n);
            enquefront(&s, n);
            break;

        case 4:
            n = dequerear(&s);
            printf("the deleted no. is %d\n", n);
            break;

        case 5:
            display(&s);
            break;
        }
    } while (choice);
    return 0;
}