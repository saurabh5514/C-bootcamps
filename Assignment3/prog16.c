// write a program to check whether a given character is an alphabet uppercase a digit or a special character 
#include<stdio.h>
int main()
{
    char ch='@';

    if(ch>=65&&ch<=90)
    {
        printf("Upper case alphabet");
    }
    else if(ch>=97&&ch<=122)
    {
        printf("lower case character");
    }
    else if(ch>=48&&ch<=57)
    {
        printf("it is a digit");
    }
    else
    {
        printf("Special Character");
    }

    return 0;
}