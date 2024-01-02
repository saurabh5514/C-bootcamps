// 9. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
void reverse_order(int *);

int main()
{
    int arr[5];
    int i;
    printf("Enter the five numbers\n");
    for(i=0;i<5;i++)
      scanf("%d",&arr[i]);
     reverse_order(arr);
   
}
void reverse_order(int *ptr)
{
    int i,sum=0;
    printf("Array in reverse order \n");
    for(i=4;i>=0;i--)
    {
        printf("%d  ",ptr[i]);
    }
    printf("\n");
}
