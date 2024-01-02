// 9. Write a program in C to count the digits of a given number using recursion
#include<stdio.h>
int digit_c(int);
int main()
{
    int d,num;
    printf("Enter the number ");
    scanf("%d",&num);
     d=digit_c(num);
     printf("The number of digit is %d\n",d);
}
int digit_c(int n)
{
    int count=0,x=0;
    if(n==0)
    {
       return 0;
    }
     count++;
     return(count+digit_c(n/10));
   
}