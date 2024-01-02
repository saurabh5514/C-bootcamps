// 9. Write a program in C to find the square of any number using the function.
#include<stdio.h>
int square(int);
int main()
{
    int a,sq;
  printf("Enter the number for finding square");
  scanf("%d",&a);
  sq=square(a);
  printf("Square of given number is %d",sq);
}
int square(int x)
{
    int sq;;
    sq=x*x;
    return sq;
}