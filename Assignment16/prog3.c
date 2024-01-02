// 3. Write a program in C to find the transpose of a given matrix.
#include <stdio.h>
int main()
{
    int i, j, m, n, p, q;
    printf("Enter the order of matrix A in m*n form\n");
    scanf("%d%d", &m, &n);

    int a[m][n], b[n][m];
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            b[i][j] = a[j][i];
        }
        printf("\n");
    }
    printf("Transporse of matrix is:---\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}