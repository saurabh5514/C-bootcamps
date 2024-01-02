// 10. Write a program in C to find the sum of the series 1! /1+2!/2+3!/3+4!/4+5!/5 using the function.
#include<stdio.h>
int fact(int);
int series();
int main()
{  
    int sum=0;
    sum=series();
   printf("sum of series is %d ",sum);
}
int fact(int x)
{
    int fact=1;
    while (x>0)
    {
        fact=fact*x;
         x--;
        
    }
    return fact;
}
int series()
{  
    int sum=0;
   sum = fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
   return sum;
}
