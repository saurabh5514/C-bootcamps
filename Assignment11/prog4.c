// 4. Write a function to find the next prime number of a given number. (TSRS)
#include<stdio.h>
int prime_next(int);
int main()
{
    int x, c;
    printf("Enter the number");
    scanf("%d", &x);
    c = prime_next(x);
    printf("Next prime number is %d",c);
   
}
int prime_next(int x)
{
 int i,j,count=1;
 for(i=x+1;1;i++)
 {
    int flag=1;
      for (j = 2; j < i; j++)
      { 
        if (i%j == 0)
        {
           flag=0;
        } 
      }
    if(flag==1)
    {
      return i;
       break;
    }
 }
}