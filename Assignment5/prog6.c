// write a program to print the first N even natural numbers 
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number for printing the n even numbers\n ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }
}