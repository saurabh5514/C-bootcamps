// Write a program to calculate sum of squares of first N natural numbers

#include<stdio.h>
int main()
{
    int n,i,sq,sum=0;
    printf("Enter the number for Printing the square of N natural numbers\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sq=i*i;
        sum=sum+sq;
    }
    printf("The sum of squares of first %d Natural numbers is %d\n",n,sum);
}
