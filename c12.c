#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=0;
struct node *rear=0;
int enqueue()
{
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the elements of Queue:\n");
    scanf("%d",&x);
    newnode->data=x;
    newnode->next=NULL;
    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
int dequeue()
{
    if(front==0 && rear==0)
    {
        printf("Empty Queue..");
    }
    else
    {
        struct node *temp;
        temp=front;
        printf("Deleted Element is:");
        printf("%d\n",front->data);
        front=front->next;
        free(temp);
    }
    return 0;
}
int display()
{
    if(front==0 && rear==0)
    {
        printf("Empty Queue..\n");
    }
    else
    {
        struct node *temp;
        temp=front;
        printf("Elements Are :");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }

}
int peek()
{
    printf("\nPeek Element is:%d \n",front->data);
}
int main()
{
    int ch;
    do
    {
        printf("\nEnter choice: 1:enqueue.2:display.3:dequeue.4:peek.:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:enqueue(); break;
            case 2:display(); break;
            case 3:dequeue(); break;
            case 4:peek(); break;
            default:printf("Invalid choice..");
        }
    }while(ch!=5);
    return 0;
}