// 1. Write a function to calculate LCM of two numbers. (TSRS)

#include <stdio.h>
int least_factor(int, int);
int main()
{
    int lcm, a, b;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    lcm = least_factor(a, b);
    printf("Lcm of two Number is %d ", lcm);
}
int least_factor(int x, int y)
{
    int lcm = 0, i;
    for (i = 2; i <= x * y; i++)
    {
        if (i % x == 0 && i % y == 0)
        {
            lcm = i;
            return lcm;
        }
    }
}
