// Write a program to print a given number without its last digit 
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number \n");
    scanf("%d",&a);
    printf("The number is %d",a);
    a/=10;
    printf("\nthe number without its last digit is %d\n",a);
    return 0;
}