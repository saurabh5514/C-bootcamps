// write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i;
    printf("cubes of first 10 natural number is \n");
    for(i=1;i<=10;i++)
    {
      int squares=i*i*i;
        printf("the cubes of %d is %d\n",i,squares);
    }
}