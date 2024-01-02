// write a program to print table of 5
#include<stdio.h>
int main()
{
  int i,num,table;
  for(i=0;i<=10;i++)
  {
    num=5;
    table=5*i;
    printf("%d * %d = %d \n",num,i,table);
  }
  return 0;
}