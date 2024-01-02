// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include<stdio.h>
int sum_square(int);
int main()
{
    int sum,num;
     printf("Enter the Number for find the sum of Square of first n natural numbers");
     scanf("%d",&num);
    sum=sum_square(num);
    printf("The sum of square is %d \n",sum);

}
int sum_square(int n)
{
    if(n>0)
    {
        return((n*n)+sum_square(n-1));
    }
}