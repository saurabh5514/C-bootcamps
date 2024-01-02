// 5. Write a function to print first N prime numbers (TSRN)
#include<stdio.h>
void prime_num(int );
int main()
{
    int x;
    printf("Enter the number for printing n Prime numbers");
    scanf("%d",&x);
    prime_num(x);
}
void prime_num(int x)
{
    int count=1;
    for(int i=2;count<=x;i++)
    {
        int flag=1;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
              flag=0;
        }
        if(flag==1){
            printf(" %d ",i);
            count++;
        }
    }
}