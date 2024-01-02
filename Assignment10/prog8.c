/* 8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
int arrangements(int,int);
int main()
{
    int a=0,n,r;
    printf("Enter the value of n and r");
    scanf("%d%d",&n,&r);
    a = arrangements(n,r);
    printf("The number of arrangements are %d",a);

}
int arrangements(int n,int r)
{
    int fact_n=1,fact_nr=1,a=0;
     for(int i=n;i>=1;i--)
     {
        fact_n=fact_n*i;
      
        if(i<=n-r)
        {
         fact_nr=fact_nr*i;     
        }
     }
     a=fact_n/(fact_nr);
     return a;
}