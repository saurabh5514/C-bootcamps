// write a program to input a number from the user and also input a digit append a digit in the number and print resulting number
#include<stdio.h>
int main()
{
   int a;
   printf("Enter the number");
   scanf("%d",&a);
   a=a*10+9;
   printf("the digit entering the number %d",a);
   return 0;
}