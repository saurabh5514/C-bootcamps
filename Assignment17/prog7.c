/*-------7. Write a program in C to count the total number of alphabets, digits and special
characters in a string.--------------*/
#include<stdio.h>
int main()
{
    int a=0,d=0,s=0,i;
    char str[20]="ABcdefg123@$";
    for(i=0;str[i];i++)
    {
       if(str[i]>=65&&str[i]<=122)
        {
            a++;
        }
       else if(str[i]>=48&&str[i]<=57)
       {
         d++;
       }
       else 
         s++;
    }
    printf("Alphabets = %d \n digits = %d \n special characters = %d \n",a,d,s);
}