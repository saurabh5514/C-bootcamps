// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.
#include <stdio.h>
int main()
{
    int i, j, m, n,flag=0,s=0;
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
    //    printf("lower triangular matrix is -------\n");
        for (int i = 0; i < m; i++)
        {
            for (int j =0; j<n; j++)
            {      
               if(j>=i+1)
               {
                 if(a[i][j]==0)
                        flag=1;
               }
               if(j>=i+1)
               {
                 if(a[i][j]==0)
                        s=1;
               }
                
            }
            printf("\n");
        }
      if(flag==1&&s==1)
        printf("It is a sparse Matrix\n");
      else 
       printf("It is not a sparse matrix\n");
    }
}