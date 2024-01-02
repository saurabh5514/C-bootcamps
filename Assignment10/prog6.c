// 6. Write a function to calculate the factorial of a number. (TSRS)
#include<stdio.h>
int fact(int);
int main()
{
    int num,fac=0;
  printf("Enter the number ");
  scanf("%d",&num);
  fac=fact(num);
  printf("factorial of number is %d ",fac);
}
int fact(int n)
{
       int fact=1;
    for(int i=n;i>=1;i--)
    {
       fact=fact*i;
     
    }
    return fact;
    
}
