// write a program to make the digit of a number stored in a variables zero
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number ");
    scanf("%d",&a);
    a=a/10;
    a=a*10;
    printf("after the last digit is zero %d ",a);
    return 0;
}