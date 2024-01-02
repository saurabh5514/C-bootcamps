// write a program to check whether a given number is an even number or an odd number 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("the number %d is even\n",num);
    }
    else
    {
        printf("the number %d is odd\n",num);
    }
    return 0;
}