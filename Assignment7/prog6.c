// Write a program to print all Prime numbers under 100
#include <stdio.h>
int main()
{
    int i, prime,count;
    for (int j = 1; j <100; j++)
    {
        count=0;
      for(i=2;i<=j/2;i++)
      {
         if(j%i==0)
        {
          count++;
          break;
        }
      }
      if(count==0&&j!=1){
        printf(" %d ",j);
      }
    }
}