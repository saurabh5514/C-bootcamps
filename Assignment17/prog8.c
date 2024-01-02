// 8. Write a program in C to copy one string to another string
#include<stdio.h>
int main()
{
    int i,strlen;
    char str1[10] = "hello", str2[10];
    for(i=0;str1[i];i++);
      strlen=i;
    for(i=0;i<=strlen;i++)
        str2[i]=str1[i];

    for(i=0;str2[i];i++)
         printf("%c",str2[i]);
    printf("\n");

}