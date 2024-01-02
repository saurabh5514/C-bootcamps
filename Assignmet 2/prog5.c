// Write a program to input three digit number and display the sum of the digits 
#include<stdio.h>
int main()
{
    int num,a,b,c,total;
    printf("Enter the three digit number\n");
    scanf("%d",&num);
    a=num/100;
    b=(num/10)%10;
    c=num%10;
    total=a+b+c;
    printf("the addition of three number is %d+%d+%d=%d ",a,b,c,total);
    return 0;
}