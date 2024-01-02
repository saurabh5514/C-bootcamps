// 8. Write a program to compute the sum of all elements in an array using pointers.
#include<stdio.h>
int sum(int *);

int main()
{
    int arr[5];
    int i,s;
    printf("Enter the five numbers\n");
    for(i=0;i<5;i++)
      scanf("%d",&arr[i]);
    s= sum(arr);
    printf("The sum of all elements of array is %d \n",s);
}
int sum(int *ptr)
{
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum+=ptr[i];
    }
    return sum;
}

