// 2. Write a program to count the occurrence of a given character in a given string.
#include<stdio.h>
int main()
{
   char str[50]="Praabhjot";
   char s='P';
   int i,temp,strlen,count=0;
    for( i=0;str[i];i++);
     strlen=i;

   for(i=0;i<strlen;i++)
   {
       if(s==str[i])
        {
            count++;
        }
     
   }
   
   printf("%c = %d times\n ",s,count);
}
