// 9. Write a program in C to read n number of values in an array and display it in reverse order. Take array values from the user.
#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the numbers");
    for(i=0;i<=4;i++)
       scanf("%d",&a[i]);
    printf("Array in reverse order \n");
    for(i=4;i>=0;i--)
       printf("%d\n",a[i]);
}
