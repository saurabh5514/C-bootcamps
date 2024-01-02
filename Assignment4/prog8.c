// write a program to print squares of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i;
    printf("Squares of first 10 natural number is \n");
    for(i=1;i<=10;i++)
    {

      int squares=i*i;
        printf("the square of %d is %d\n",i,squares);
    }
}