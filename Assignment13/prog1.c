// Write a recursive function to calculate sum of first N natural numbers
#include<stdio.h>
int sum_natural(int);
int main()
{
    int num,sum;
  printf("Enter the number for calculating the sum of N natural numbers");
  scanf("%d",&num);
    sum = sum_natural(num);
  printf("%d\n",sum);
}
int sum_natural(int n)
{
    int sum=0;
    if(n>0)
    { 
       return(n+sum_natural(n-1)) ;    
    }
    
}
