// 6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include <stdio.h>
int main()
{
  int a[10], i, s;
  printf("Enter the numbers");
  for (int i = 0; i <= 9; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i <= 8; i++)
  { 
    for (int j = i+1; j<=9;j++)
    {
          if(a[j]>a[i])
          {
              int temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
    }
  }
           printf("The sorted array is \n");
    for(int i=0;i<=9;i++)
    {
           printf("%d\n",a[i]);
    }
 
}