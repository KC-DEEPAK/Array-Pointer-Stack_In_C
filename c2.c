#include<stdio.h>
#include<stdlib.h>
void insert()
{
    int a[50],pos,size,num,i;
    printf("Enter the Size of the Array: ");
    scanf("%d",&size);
    printf("Enter the Elements of Array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the Element should be Inserted : ");
    scanf("%d",&num);
    printf("Enter the position you want insert: ");
    scanf("%d",&pos);
    if(pos<=0||pos>size+1)
    {
        printf("its INVALID.....");
    }
    else
    {
        for(i=size-1;i>=pos-1;i--)
        {
            a[i+1]=a[i];
        }
        a[pos-1]=num;
        size++;
        printf("Elements in array are: ");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
    }
}
void main()
{
    insert();
}