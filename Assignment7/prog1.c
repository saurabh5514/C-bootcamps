// Write a program to find the Nth term of the Fibonnaci series.

#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 0, i, n;
    printf("Enter the nth term of fibonnaci series which you want to find");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        c = a + b;
        if (n == i)
        {
            printf("%d ", c);
        }

        a = b;
        b = c;
    }
}