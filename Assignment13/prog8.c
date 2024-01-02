// 8 .Write a recursive function to print first N terms of Fibonacci series
#include<stdio.h>
int fibonacci(int );

int main()
{
   fibonacci(5);
}
int fibonacci(int n)
{
    if(n>0)
    {
      fibonacci(n-1);
       int a=0, b=1,c=a+b;
       printf("%d",c);
       a=b;
       b=c;
      
   
    }
    if(n==0)
    return 0;
}