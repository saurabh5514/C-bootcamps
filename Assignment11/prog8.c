// 8. Write a function to print PASCAL Triangle. (TSRN)
#include<stdio.h>
int  fact(int );
int combination(int,int);
void printpattern(int);
int main()
{
  int rows;
  printf("Enter Rows\n");
  scanf("%d",&rows);
  printf("\n");
  printpattern(rows);
}
int  fact(int x)
{
  int fact=1;
  while(x>0)
  {
    fact=fact*x;
    x--;
  }
   return fact;
}
int combination(int n,int r)
{
  int comb;
  comb = fact(n)/(fact(r)*fact(n-r));
  return comb;
}
void printpattern(int line)
{
  int i,j,k,r;
  for(i=1;i<=line;i++)
  {
    k=1; r=0;
    for(j=1;j<=line*2-1;j++)
    {
      if(j>=line-i+1&&j<=line-1+i&&k)
        {
          printf(" %2d ",combination((i-1),r));
          k=0;r++;
        }
        else {
          printf("    ");
          k=1;
        }

    }
    printf("\n");
  }
}
