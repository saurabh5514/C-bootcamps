// 5. Write a program to find the maximum number between two numbers using a pointer
#include <stdio.h>
int max(int*, int*);
int main()
{
    int a, b, m;
    printf("Enter the two number");
    scanf("%d%d", &a, &b);
    m = max(&a, &b);
    printf("Maximum number is %d \n", m);
}
int max(int *p, int *q)
{
    if (*p > *q)
        return *p;
    else
        return *q;
}