// 10. Write a program in C to copy the elements of one array into another array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[5],b[5],i,j;
    printf("Enter the numbers");
     for(i=0;i<=4;i++)
       scanf("%d",&a[i]);
     for(i=0;i<=4;i++)
     {
            b[i]=a[i];   
            printf("%d\n",b[i]);
     }
            printf("copy of array is print below\n");
      for(i=0;i<=4;i++)
     {
            printf("%d\n",b[i]);
     }
}