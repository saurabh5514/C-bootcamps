/* 7. Write a function to calculate the number of combinations one can make from n items
and r selected at a time. (TSRS)*/

#include<stdio.h>
int combination(int,int);
int main()
{
    int c=0,n,r;
    printf("Enter the value of n and r");
    scanf("%d%d",&n,&r);
    c = combination(n,r);
    printf("The number of combination are %d",c);

}
int combination(int n,int r)
{
    int fact_n=1,fact_r=1,fact_nr=1,comb=0;
     for(int i=n;i>=1;i--)
     {
        fact_n=fact_n*i;
        if(i<=r)
        {
        fact_r=fact_r*i;   
        }
        if(i<=n-r)
        {
         fact_nr=fact_nr*i;     
        }
     }
     comb=fact_n/(fact_r*fact_nr);
     return comb;
    
    
}
