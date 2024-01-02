// 4. Write a function to print first N natural numbers (TSRN)
#include<stdio.h>
void natural(int);
int main()
{
 int numbers;
 printf("Enter the Number for Printing N natural numbers");
 scanf("%d",&numbers);
 natural(numbers);
 
}
void natural(int num)
{
    for(int i=1;i<=num;i++)
    {
       printf(" %d ",i);
    }
}