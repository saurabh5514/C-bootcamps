#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num%5==0)
    {
        printf("the number %d is divisible by 5",num);
    }
    else
    {
        printf("the number %d is not  divisible by 5",num);
    }
    return 0;
}