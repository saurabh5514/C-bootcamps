// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)
#include<stdio.h>
void prime_num(int,int );

int main()
{
    int x,y;
    printf("Enter the range of printing the numbers");
    scanf("%d%d",&x,&y);
    prime_num(x,y);
}
void prime_num(int a,int b)
{
    for(int i=a;i<=b;i++)
    {
        
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
              break;
          else if(i==j+1){
                printf(" %d ",i);
            }
        }
       
    }
}
