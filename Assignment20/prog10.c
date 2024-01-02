// 10. Write a program to print a string in reverse using a pointer

#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], *ptr;
    ptr = str;
    int i,len;
    printf("Enter the string\n");
    fgets(str, 50, stdin);
    str[strcspn(str, "\n")] = '\0';
    for(i=0;ptr[i];i++);
        len=i;
    for(i=len-1;i>=0;i--)
       printf("%c",ptr[i]);
    printf("\n");
}