// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS) 
#include<stdio.h>
void swap(char*,char*);
int main()
{
    char str1[]="hello ";
    char str2[]="world";
    swap(str1,str2);
    printf("%s",str1);
    printf("%s",str2);
    printf("\n");
}
void swap(char *one,char *two)
{
    int i=0;
    char temp[50];
    for(i=0;one[i];i++)
       temp[i]=*(one+i);
   
    for(i=0;two[i];i++)
       *(one+i)=*(two+i);

    for(i=0;two[i];i++)
       *(two+i)=temp[i];
}