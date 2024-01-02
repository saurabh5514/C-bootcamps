// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include <stdio.h>
int greatest_num(int a[], int n);
int main()
{
    int n, i, g;
    printf("Enter the size of array");
    scanf("%d", &n);
    int a[n];
    g = greatest_num(a, n);
    printf("The greatest number in array is %d\n", g);
}
int greatest_num(int a[], int n)
{
    printf("Enter the array \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
        if (a[0] < a[i])
        {
            a[0] = a[i];
        }
    }
    return a[0];
}
