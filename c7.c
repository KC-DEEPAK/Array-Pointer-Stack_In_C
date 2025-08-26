#include<stdio.h>
#include<stdlib.h>
# define N 5
int stack[N];
int top=-1;
int push()
{
    int x;
    printf("Enter the Element to stack: ");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("Stack is Over Flow....\n");
    }
    else
    {
        top++;
        stack[top]=x;
    }
    return 0;
}
int pop()
{
    int item;
    if(top==-1)
    {
        printf("Stack is Under Flow..\n");
    }
    else
    {
        item=stack[top];
        top--;
        printf("Deleted Element in Stack is %d\n",item);
    }
}
int peek()
{
    if(top==-1)
    {
        printf("Stack is Under Flow...\n");
    }
    else
    {
        printf("Peek Element Is %d\n",stack[top]);
    }
}
int display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
}
int main()
{
    int ch;
    do
    {
        printf("Enter Choice: 1:Push: 2:Pop: 3:peek: 4:display:  ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push(); break;
            case 2:pop();  break;
            case 3:peek();  break;
            case 4:display();break;
            default:
            printf("Invalid Choice");
        }
    }
    while(ch!=0);
    return 0;

}