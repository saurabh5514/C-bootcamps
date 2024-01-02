// write a program to print the first N odd natural numbers 
#include<stdio.h>
int main()
{
     int i,n;
      printf("Enter the number for printing N Natural numbers in reverse order \n");
      scanf("%d",&n);
    for(i=1;i<n;i=i+2)
    {
        printf("%d\n",i);
    }
}