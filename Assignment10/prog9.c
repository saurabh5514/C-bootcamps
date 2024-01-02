// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>
int check_digit(int,int);
int main()
{
    int x=2865,d;
    printf("Enter the digit which you want to check in number");
    scanf("%d",&d);
    d=check_digit(x,d);
    if(d==1)
      printf("digit is  available");
    else
      printf("digit is not available");
}
int check_digit(int x,int d)
{
    int rem=0;
    while(x>0)
    {
      rem=x%10;
      if(rem==d)
        return 1;
      else
        x=x/10;
    }
}