// 10. Write a program in C to find the row with maximum number of 1s.
#include <stdio.h>
int main()
{
    int i, j, m, n;
    printf("Enter the order of matrix A in m*n form\n");
    scanf("%d%d", &m, &n);
    int a[m][n], b[m];
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
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
                count++;
            if (j == n - 1)
            {
                b[i]=count;
                printf("%d %d\n",i,count);
                
            }
        }
      
          
    }
    for (int i = 0; i < m; i++)
    {
        if (b[0] <= b[i])
        {
            b[0] = b[i];
           printf("row = %d , 1s = %d \n", i, b[0]);
        }

    }
}