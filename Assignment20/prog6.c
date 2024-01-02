// 6. Write a program to calculate the length of the string using a pointer
#include<stdio.h>
int main()
{
    int l;
    char str[50]="hello world";
     l = len(str);
     printf("%d ",l);

}
int len(char *ptr)
{
   int i;
   for(i=0;ptr[i];i++)
   {
    
   }
   return i;
}
