// Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>
int main()
{

    int a,b,c,i,coprime;
    printf("Enter the numbers for calculation of Hcf ");
    scanf("%d%d",&a,&b);
    c=(a<b)?a:b;
    for(i=1;i<=c;i++)
    {
        if(a%i==0&&b%i==0)
        {
            coprime=i;
        }
    }
    if(coprime==1)
    printf("It is co prime number ");
    else
    printf("It is not co prime number ");

}