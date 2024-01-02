// 3. Write a recursive function to calculate sum of first N even natural numbers
#include<stdio.h>
int sum_even(int);
int main()
{
    int num,sum;
  printf("Enter the number for calculating the sum of N even natural numbers");
  scanf("%d",&num);
    sum = sum_even(num);
  printf("%d\n",sum);
}
int sum_even(int n)
{

    if(n>0)
    { 
       return((n*2) + sum_even(n-1)) ;    
    }
    
}