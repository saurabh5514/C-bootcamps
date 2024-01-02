// 10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power(int ,int );

int main()
{
    int num,p,result;
    printf("Enter the number and power");
    scanf("%d%d",&num,&p);
   result=power(num,p);
   printf("%d",result);
}
int power(int num,int p)
{
    if(p>1)
    {
 
        return(num*power(num,p-1));
    
    }
    return num;
}