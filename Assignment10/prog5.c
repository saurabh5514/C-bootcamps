// 5. Write a function to print first N odd natural numbers. (TSRN)
#include<stdio.h>
void odd_Num(int);
int main()
{
   int num;
   printf("Enter the Number for Printing N odd numbers");
   scanf("%d",&num);
   odd_Num(num);
}
void odd_Num(int n)
{
    for(int i=1;i<=n;i+=2)
    {
        printf(" %d ",i);
    }
}