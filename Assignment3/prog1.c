// write a program to check whether a given number is positive or non-positive
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num>0)
    {
        printf("The number is %d positive",num);
    }
    else{
        printf("the number is non positive");
    }
    return 0;
}