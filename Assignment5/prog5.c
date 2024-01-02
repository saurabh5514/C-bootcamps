// write a program to print the first N odd natural number in reverse order 
#include<stdio.h>
int main()
{
    int num,n;
    printf("Enter the number for printing N odd Natural numbers in reverse order \n");
    scanf("%d",&n);
    for(num=n;num>=1;num=num-2)
    {
       printf("%d\n",num);
    }
}