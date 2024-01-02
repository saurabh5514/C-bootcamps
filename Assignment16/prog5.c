// 5. Write a program in C to find the sum of left diagonals of a matrix
#include <stdio.h>
int main()
{
    int i, j, m, n, sum = 0, flag = 0;
    ;
    printf("Enter the order of matrix A in m*n form\n");
    scanf("%d%d", &m, &n);
    if (m == n)
    {
        int a[m][n];
        printf("Enter the matrix A\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Matrix A is \n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        int count = 1;
        for (int i = 0; i < m; i++)
        {
            for (int j = n - count; j >= 0; j--)
            {
                count++;
                sum += a[i][j];
                break;
            }

            printf("\n");
        }
        printf("Sum of left diganol matrix is %d\n", sum);
    }
    else
        printf("Please enter the order of square matrix");
}