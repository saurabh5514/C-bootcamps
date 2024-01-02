// Write a program to reverse a given number

#include<stdio.h>
int main()
{
    int num,rem,rev=0;
    printf("Enter the number");
    scanf("%d",&num);
    while(num>0)
    {
       rem=num%10;
       rev=rev*10+rem;
      num=num/10;
         
    }
    printf("revese number is %d\n",rev);
}