// write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number for printing N cubes of natural number is \n");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
      int squares=i*i*i;
        printf("the cubes of %d is %d\n",i,squares);
    }
}