//  Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int lcm,num1,num2,i;
    printf("enter the number");
    scanf("%d %d",&num1,&num2);
     if(num1>num2){
        printf("num1 %d",num1);
     }
    for(lcm=1;lcm<=num1*num2;lcm++)
    {
        if(lcm%num1==0&&lcm%num2==0)
        {
            printf("the value of %d\n",lcm);
            break;
        }
    }
}