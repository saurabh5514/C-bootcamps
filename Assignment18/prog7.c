// 7. Write a function to check whether a given string is palindrome or not.
#include<stdio.h>
#include<string.h>
int palindrome_fun(char [],char []);

int main()
{
    char str1[30],str2[30];
     int s;
    printf("Enter the string\n");
    fgets(str1,30,stdin);
    s=palindrome_fun(str1,str2);
    if(s==1)
      printf("String is palindrome\n");
    else 
      printf("Not palindrome\n");
}
int palindrome_fun(char str[],char str1[])
{
    int i,j,len;
     str[strcspn(str,"\n")]=0;
    for( i=0;str[i];i++)
    { str1[i]=str[i]; }     
      len=i;
      int count=1;     
     
    for(i=0;str[i];i++)
    {
        for(int j=len-count;j>=0;j--)
       {
          if(str[i]==str1[j])
          {
              count++;
               break;
          }
       }
    }
    if(len==count-1)
        return 1;
    else 
       return 0;
}

