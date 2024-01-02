// Write a program to print all Armstrong numbers under 1000
#include<stdio.h>
int main()
{
    int i,j,sum,num,temp,rem;
    for(i=1;i<=1000;i++)
    {
        sum=0;
        num=i;
        temp=num;
        while(num!=0)
        {
              rem=num%10;
              sum=sum+(rem*rem*rem);
              num=num/10;
        }
        if(sum==temp)
        {
            printf(" %d ",i);
        }
    }
}