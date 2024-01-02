// Write a program to calculate HCF of two numbers
#include<stdio.h>
int main()
{

    int a,b,c,i,hcf;
    printf("Enter the numbers for calculation of Hcf ");
    scanf("%d%d",&a,&b);
    c=(a>b)?a:b;
    for(i=1;i<=c;i++)
    {
        if(a%i==0&&b%i==0)
        {
            hcf=i;
        }
    }
    printf("hcf of two number is %d",hcf);
}
