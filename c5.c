#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[3][3]={6,2,5,0,1,3,4,9,8};
    int *p;
    p=&a[0][0];
    printf("%u\n",p);
    printf("%u\n",&a);
    printf("%d\n",*a[2]);
    printf("%u\n",a+1); 
    printf("%u\n",a+2);
    printf("%u\n",*(a+1));
    printf("%u\n",(*(a+1)+2));
    printf("%u\n",*(*(a+1)+2));
    printf("%u\n",*(*(a+2)+0));
    printf("%u\n",**a);
    printf("%u\n",*(*a+1));
    printf("%u\n",a[1]+1);

}