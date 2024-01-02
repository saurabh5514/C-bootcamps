// 1. Write a program to calculate the sum of two matrices each of order 3x3.
#include<stdio.h>
int main()
{
    int o;
    printf("Enter the order of matrices");
    scanf("%d",&o);
    int a[o][o],b[o][o],c[o][o];
    printf("Enter the matrix A\n");
    for(int i=0;i<o;i++)
    {
        for(int j=0;j<o;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the matrix B\n");
    for(int i=0;i<o;i++)
    {
        for(int j=0;j<o;j++)
        {
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A is \n");
      for(int i=0;i<o;i++)
    {
        for(int j=0;j<o;j++)
        {
            printf("%d\t",a[i][j]); 
        }
        printf("\n");
    }
     printf("Matrix B is \n");
      for(int i=0;i<o;i++)
    {
        for(int j=0;j<o;j++)
        {
            printf("%d\t",b[i][j]); 
        }
        printf("\n");
    }
    printf("Sum of Matrices is \n");
      for(int i=0;i<o;i++)
    {
        for(int j=0;j<o;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]); 
        }
        printf("\n");
    }

}