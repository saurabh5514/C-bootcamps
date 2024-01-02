// Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter the Number for Printing the N Odd number on screen\n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;

    }
    printf("the sum of %d Odd number is %d",n,sum);
}