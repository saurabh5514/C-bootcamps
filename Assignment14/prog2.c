// 2. Write a program to calculate the average of numbers stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[10],sum=0;
    float avg=0;
    printf("Enter the numbers");
    for(int i=0;i<=9;i++)
    {
      scanf("%d",&a[i]);
     sum=sum+a[i];
    }   
    avg=sum/10.0;
    printf("Average = %.3f \n",avg);
 
}
