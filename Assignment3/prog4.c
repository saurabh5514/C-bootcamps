// write a program to check whether a given number is an even number or an odd number without using %operator
#include<stdio.h>
int main()
{
    int num,isEven;
    printf("Enter the number");
    scanf("%d",&num);
    isEven=num/2;
    
    if(isEven*2==num)
    {
        printf("the number %d is even\n",num);
    }
    else
    {
        printf("the number %d is odd\n",num);
    }
    return 0;
}