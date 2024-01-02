// 1. Define a function to input variable length string and store it in an array without memory wastage.
#include<stdio.h>
#include<stdlib.h>
char* func()
{
    char *ptr,c; 
    int i=0,j=1;
    ptr = (char*)malloc(sizeof(char));
     printf("Enter the string\n");
    while(c!='\n')
    {
         c = getc(stdin);
         j++;
         ptr =  (char*)realloc(ptr,j*sizeof(char));
         ptr[i]=c;
          i++;
    
    }

    ptr[i]='\0';
     return ptr;

}
int main()
{
   char *x;
   int i;
   x = func();
   printf("\n-------Printing the string ------\n");
   printf("%s",x);
   free(x);
}
