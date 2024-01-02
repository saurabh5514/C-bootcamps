// write a program to print table of n
#include<stdio.h>
int main()
{
  
  int i,n,table;
  printf("Enter the number for printing the table");
  scanf("%d",&n);
  for(i=0;i<=10;i++)
  {
  
    table=n*i;
    printf("%d * %d = %d \n",n,i,table);
  }
  return 0;
}