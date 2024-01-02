// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],sum=0;
    printf("Enter the numbers ");
    for(int i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("Sum of number sorted in array is %d \n", sum);
}