// 1. Write a function to calculate HCF of two numbers. (TSRS)

#include <stdio.h>
int highest_factor(int, int);
int main()
{
    int hcf, a, b;
    printf("Enter two numbers");
    scanf("%d%d", &a, &b);
    hcf = highest_factor(a, b);
    printf("HCF of two Number is %d ", hcf);
}
int highest_factor(int x, int y)
{
    int hcf = 0, c,i;
    c=(x>y)?x:y;
    for (i = 1; i <= c; i++)
    {
            if (x % i == 0 && y % i == 0)
            {
                hcf = i;
                
            }
        
    }
    return hcf;
}