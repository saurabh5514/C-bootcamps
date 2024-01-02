/*2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
     int n,i,sum=0;
     float avg = 0;
     int *ptr;
     printf("Enter the number for find average of n numbers\n");
     scanf("%d",&n);
    ptr =(int *)calloc(n,sizeof(int));
   
     printf("Enter the data\n");
     for(i=0;i<n;i++)
     {
           scanf("%d",&ptr[i]);
           sum += ptr[i];
     }
     avg = sum / n;
     printf("Average of data is %f\n",avg);
     free(ptr);
}

