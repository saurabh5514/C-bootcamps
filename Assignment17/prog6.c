// 6. Write a program to reverse a string.
#include<stdio.h>
int main()
{
    char str[20]="ABCDEF";
    int strlen,i,j,count=1;
    for(i=0;str[i];i++);
        strlen=i;
    // for(i=0;i<strlen-2;i++)
    // {
    //     char temp;
    //     for(j=strlen-count;j>=0;j--)
    //     {
    //         temp=str[i];
    //         str[i]=str[j];
    //         str[j]=temp;
    //         count++;
    //         break;
    //     }
    // }
    for(i=strlen-1;i>=0;i--)
    {
       printf("%c",str[i]);
    }
    printf("\n");
    
}