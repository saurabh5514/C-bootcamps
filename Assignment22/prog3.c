// 3. Write a program to calculate the sum of n numbers entered by the user using malloc and free.
#include<stdio.h>
#include<stdlib.h>
int main()
{
      int n,i,sum=0;
     int *ptr;
     printf("Enter the number for find sum of n numbers\n");
     scanf("%d",&n);
    ptr =  (int*)malloc(4*n);
     printf("Enter the data\n");
     for(i=0;i<n;i++)
     {
           scanf("%d",&ptr[i]);
           sum += ptr[i];
     }
     printf("Sum of n number is %d\n",sum);
     free(ptr);
}
