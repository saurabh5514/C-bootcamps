//check weather a number is three digit or not.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(num>99 && num<=999)
    {
        printf("the number is %d three digit number\n",num);
    }
    else{
        printf("the number is %d not three digit number\n",num);

    }
}