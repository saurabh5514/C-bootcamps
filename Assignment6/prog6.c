//  Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
    int fact=1,n,i;
    printf("Enter the number for calculate factorial \n");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("factorial of number %d is %d",n,fact);
    return 0;
}