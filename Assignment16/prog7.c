// 7. Write a program in C to print or display the lower triangular of a given matrix.
#include <stdio.h>
int main()
{
    int i, j, m, n;
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
        printf("lower triangular matrix is -------\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j >= i + 1)
                    printf("%d\t", a[i][j]);
                else
                {
                    printf("\t");
                }
            }

            printf("\n");
        }
    }
    else
        printf("Please enter the order of square matrix");
}