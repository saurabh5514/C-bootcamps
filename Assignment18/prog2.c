// 2. Write a function to reverse a string.
#include<stdio.h>
void reverse_str(char []);

int main()
{
    char str[20];
    printf("Enter the string\n");
    fgets(str,20,stdin);
    reverse_str(str);
}
void reverse_str(char st[])
{
    int l,i;
    for(i=0;st[i];i++);
      l=i;
   
    for(i=l;i>=0;i--)
    {
         printf("%c",st[i]);
    }
        
    printf("\n");
}
