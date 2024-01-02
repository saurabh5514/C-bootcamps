// 2. Write a program to calculate the product of two matrices each of order 3x3

#include <stdio.h>
int main()
{
    int i, j, m, n, p, q;
    printf("Enter the order of matrix A in m*n form\n");
    scanf("%d%d", &m, &n);
    printf("Enter the order of matrix B in m*n form\n");
    scanf("%d%d", &p, &q);
    if (n == p)
    {
        int a[m][n], b[p][q], c[m][q];
        printf("Enter the matrix A\n");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the matrix B\n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
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
        printf("\nMatrix B is \n");
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        printf("\nMultipication of Matrix A and B is \n");
         for (int i = 0; i < m; i++)
        {
              
            for (int j = 0; j < q; j++)
            {
                c[i][j]=0;
                for(int k=0;k<q;k++)
                {

                c[i][j]+=a[i][k]*b[k][j];
                }
                
            }
            printf("\n");
        }
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
             printf("\n");
        }
    }
    else  
      printf("Enter the correct order\n");
}