// 5. Write a recursive function to calculate sum of digits of a given number
#include<stdio.h>
int sum_digit(int);
int main()
{
    int sum,num;
   printf("Enter the number");
   scanf("%d",&num);
   sum=sum_digit(num);
   printf("The sum of digit is %d \n",sum);
}
int sum_digit(int n)
{
    if(n>0)
    {
        return((n%10)+sum_digit(n/10));
    }
}