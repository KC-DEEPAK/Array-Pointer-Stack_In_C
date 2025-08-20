#include<stdio.h>// ARRAY DELETION AT END GIVEN POSITION AND FRONT..
#include<stdlib.h>
void delete_pos(int a[],int *size)
{
    int pos,item,i;
    printf("Enter the Position You want to Delete: ");
    scanf("%d",&pos);
    if(pos<=1||pos>*size)
    {
        printf("Its Invalid:");
    }
    else
    {
        item=a[pos-1];
        for(i=pos-1;i<*size-1;i++)
        {
            a[i]=a[i+1];
        }
        (*size)--;
        printf("Deleted Element is:%d\n",item);
        
    }

}
void display(int a[],int *size)
{
    int i;
        for(i=0;i<*size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
}
void delete_end(int a[],int *size)
{
    (*size)--;
}
void delete_front(int a[],int *size)
{
    int i;
    for(i=0;i<*size-1;i++)
    {
        a[i]=a[i+1];
    }
    (*size)--;
}
int main()
{
    int a[50],size,i;
    printf("Enter the Size of Array: ");
    scanf("%d",&size);
    printf("Enter the Elements Array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    delete_pos(a, &size);
    printf("Element After Deleting at Given Position:");
    display(a,&size);
    printf("Element After Deleting at END: ");
    delete_end(a,&size);
    display(a,&size);
    printf("Element After Deleting at FRONT: ");
    delete_front(a,&size);
    display(a,&size);
    return 0;
}