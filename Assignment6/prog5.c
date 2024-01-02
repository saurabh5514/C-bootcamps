//  Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int n,i,sq,sum=0;
    printf("Enter the number for Printing the cubes of N natural numbers\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sq=i*i*i;
        sum=sum+sq;
    }
    printf("The sum of cubes of first %d Natural numbers is %d\n",n,sum);
}