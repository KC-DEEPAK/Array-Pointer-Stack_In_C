#include<stdio.h>
#include<stdlib.h>
void compliled_time()
{
    int a[]={6,2,1,5,3};
    int b=10;
    int *p;
    int *q;
    p=&b;
    printf("%d\n",*p);//derefrencing operator...
    printf("%p\n",&b);//printing a address..
    printf("%p\n",p);//it also print the address in hexadecimal..
    printf("%d\n",p);//printing a address in decimal 
    //we use %p for printing a hexadecimal value.
    q=a;
    printf("%p\n",a);
    printf("%d\n",q);
    printf("%d\n",q);
    printf("%d\n",a[2]);//this is how we can print a[1] value 
    printf("%d\n",2[a]);
    printf("%d\n",*a);
    printf("%d\n",*q);
    printf("%d\n",a+1);
    printf("%d\n",&a+1);
    printf("%d\n",*(a+1));
    printf("%d\n",*a+1);
}
int main()
{
    compliled_time();
}
