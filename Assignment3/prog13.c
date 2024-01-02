// write a program to check whether a given number is divisible by3 and divisible by 2

#include<stdio.h>
int main()
{
   int num;
   printf("Enter the number\n");
   scanf("%d",&num);
   if(num%3==0&&num%2==0)
   {
    printf("the number is divisble by 3 and 2");
   }
   else
   {
    printf("the number is not divsible by 2 and 3");
   }
    return 0;
}