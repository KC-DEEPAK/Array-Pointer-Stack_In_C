#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top=0;
void push(int x)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=top;
    top=newnode;
}
void display()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("STACK IS EMPTY");
    }
    else
    {
        while(temp!=NULL)
        {
            printf(" %d ",temp->data);
            temp=temp->next;
        }
    }
}
void peek()
{
    if(top==NULL)
    {
        printf("Stack is Empty..");
    }
    else
    {
        printf("\npeek Element is %d\n",top->data);
    }
}
void pop()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("Stack is Empty..");
    }
    else
    {
        printf("POPED element is %d\n",temp->data);
        top=top->next;
        free(temp);
    }
}
int main()
{
    push(3);
    push(4);
    push(5);
    push(7);
    display();
    peek();
    pop();
    peek();
    pop();
    display();
    return 0;
}