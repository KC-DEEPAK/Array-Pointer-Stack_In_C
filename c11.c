#include<stdio.h>
#include<stdlib.h>
# define N 5
int queue[N];
int front=-1;
int rear=-1;
int enqueue(int x)
{
    if(rear==N-1)
    {
        printf("Queue is Overflow...");
    }
    else if(rear==-1 && front==-1)
    {
        front=rear=0;
        queue[rear]=x;
    }
    else
    {
        rear++;
        queue[rear]=x;
    }
}
int dequeue()
{
    if(rear==-1 && front==-1)
    {
        printf("Queue is Underflow..");
    }
    else if(front==rear)
    {
        printf("Deleted Element is %d\n",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("Deleted Element is %d\n",queue[front]);
        front++;
    }
}
int display()
{
    int i;
    if(rear==-1 && front==-1)
    {
        printf("Queue is Underflow..");
    }
    else
    {
        printf("Elements are: ");
        for(i=front;i<rear+1;i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
int peek()
{
    if(rear==-1 && front==-1)
    {
        printf("Queue is Underflow..");
    }
    else
    {
        printf("peek element is :%d\n",queue[front]);
    }
}
int main()
{
    enqueue(6);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    display();
    peek();
    dequeue();
    display();
    return 0;
}