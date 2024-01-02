// 1. Write a program to calculate the length of the string. (without using built-in method)
#include<stdio.h>
int main()
{
    char str[50]="Prabhjot";
    int i;
    printf("Enter your name\n");
    // fgets(str,50,stdin);
    for( i=0;str[i]!=0;i++);
        printf("%d",i); 
}
