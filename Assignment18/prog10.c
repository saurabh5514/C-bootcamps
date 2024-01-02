// 10. Write a function to find the repeated character in a given string
#include<stdio.h>
#include<string.h>
void repeat_char(char []);
int main()
{
    char str[50];
    printf("Enter the string\n");
    fgets(str,50,stdin);
    repeat_char(str);
}
void repeat_char(char str[])
{
    int i,j,len;
    str[strcspn(str,"\n")]=0;
    for(i=0;str[i];i++);
    len=i;
    int count;
    for(i=0;i<=len-1;i+=count)
    {
        count=1;
        for(j=i+1;j<len;j++)
        {
            if(str[i]==str[j])
               count++;
        }
            printf("%c == %d\n",str[i],count);
    }
}