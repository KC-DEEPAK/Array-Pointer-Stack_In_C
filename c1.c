#include<stdio.h>
#include<stdlib.h>
void traversal()
{
    int a[50];
    int size,i;
    printf("Enter the size of the array.: ");
    scanf("%d",&size);//1st user as to enter the size of the array
    printf("Enter the elements of array :");
    for(i=0;i<size;i++)//after we can ask the user to enter the elements
    {
        scanf("%d",&a[i]);//we store the elements in the array a[i] i we apply the condition. 
    }
    printf("Elements in array are: ");//After we are Traversing a array 
    for(i=0;i<size;i++)//WE use the for loop to access the elements.
    {
        printf("%d ",a[i]);//After we print the elements.
    }
}
int main()
{
    traversal();//call in main fuction.
}