// Write a program to print first N terms of Fibonacci series
#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 0, i, n;
    printf("Enter the Number for printing first N terms of fibonacci series");
    scanf("%d", &n);
    printf("The fibonacci series is");
    for (i = 1; i <= n; i++)
    {
        c = a + b;
      printf(" %d ", c);
        a = b;
        b = c;
    }
}