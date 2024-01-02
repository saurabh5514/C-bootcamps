// 6. Write a recursive function to calculate factorial of a given number
#include<stdio.h>
int factorial(int);
int main()
{
    int num,fact=1;
    printf("Enter the number ");
    scanf("%d",&num);
    fact=factorial(num);
    printf("Factorial of %d is %d\n",num,fact);
}
int factorial(int n)
{
    int fact=1;
    if(n==1)
     {
        return 1;
     }
     return(n*factorial(n-1));
}