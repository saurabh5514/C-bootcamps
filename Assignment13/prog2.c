// 2. Write a recursive function to calculate sum of first N odd natural numbers

#include<stdio.h>
int sum_odd(int);
int main()
{
    int num,sum;
  printf("Enter the number for calculating the sum of N odd natural numbers");
  scanf("%d",&num);
    sum = sum_odd(num);
  printf("%d\n",sum);
}
int sum_odd(int n)
{

    if(n>0)
    { 
       return((n*2)-1 + sum_odd(n-1)) ;    
    }
    
}