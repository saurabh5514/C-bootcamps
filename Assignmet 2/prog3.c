// Write a program to swap values of two int variables
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    printf("after swapping the numbers\n");
    c=a;
    a=b;
    b=c;
    printf("a=%d,b=%d\n",a,b);
    return 0;
}