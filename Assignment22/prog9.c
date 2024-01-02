// 9. Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, sum = 0;
    int *ptr;
    printf("Enter the number for find sum of n numbers\n");
    scanf("%d", &n);
    ptr = (int *)malloc(4 * n);
    printf("Enter the data\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("Sum of n number is %d\n", sum);
    free(ptr);
}
