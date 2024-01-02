// 3. Write a function to check whether a given number is Prime or not. (TSRS)
#include <stdio.h>
int prime_num(int);

int main()
{
    int x, c;
    printf("Enter the number");
    scanf("%d", &x);
    c = prime_num(x);
    if (c == 0)
        printf("Not a prime number");
    else
        printf("Prime Number");
}
int prime_num(int x)
{
    int i;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
}