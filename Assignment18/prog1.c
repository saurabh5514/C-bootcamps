// 1. Write a function to calculate length of the string
#include<stdio.h>
#include<string.h>
int string_len(char []);

int main()
{
   char str[20];
   int i,s;
   printf("Enter the string\n");
   fgets(str,20,stdin);
   s=string_len(str);
   printf("The length of string is %d \n",s);
}
int string_len(char str[])
{
       int i,s;
       str[strcspn(str,"\n")]=0;
        for(i=0;str[i];i++);
        return(i);
} 