// 4. Write a program to convert a given string into uppercase
#include<stdio.h>
int main()
{
    char str[20]="Abcdefgh";
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i]-=32;
        }
        else{

        }
        
    }
    printf("Value of strings in upper case is \n");
    for(i=0;str[i];i++)
       printf("%c",str[i]);
    printf("\n");
}