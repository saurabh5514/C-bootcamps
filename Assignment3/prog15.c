// write a program to check whether the number is positive,negative or zero 
//find a number is positive or negative
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num==0)
    {
         printf("Number is zero\n");

    }
    else if(num>0)
    {
        printf("Number is positive\n");
    }
    else{
        printf("number is negative\n");
    }
    return 0;

}