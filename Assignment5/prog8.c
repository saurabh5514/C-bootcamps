// write a program to print squares of the first N natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("Squares of first N natural number is \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      int squares=i*i;
        printf("the square of %d is %d\n",i,squares);
    }
}