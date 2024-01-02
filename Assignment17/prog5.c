// 5. Write a program to convert a given string into lowercase
#include<stdio.h>
int main()
{
    char str[20]="ABCDEfgh";
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>=65&&str[i]<=96)
        {
            str[i]+=32;
        }
        else{

        }
        
    }
    printf("Value of strings in Lower case is \n");
    for(i=0;str[i];i++)
       printf("%c",str[i]);
    printf("\n");
}