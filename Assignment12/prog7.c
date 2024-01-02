// 7. Write a function to print first N terms of Fibonacci series (TSRN)
#include<stdio.h>
void fibonacci(int);
int main()
{
   int f;
   printf("Enter the number N for printing n fibonacci series");
   scanf("%d",&f);
   fibonacci(f);
}
void fibonacci(int x)
{
    int count=1 ,a=0,b=1,c=0;
    for(int i=1; i<=x; i++)
    {
       c=a+b;
       printf("%d ",c);
       a=b;
       b=c;
    }
}
