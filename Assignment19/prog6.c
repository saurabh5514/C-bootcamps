// 6. Write a program to print the strings which are palindrome in the list of strings
#include<stdio.h>
#include<string.h>
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
int main()
{
    int i,p=0;
   char strall[5][10]={"lol","pop","sos","level","not"};
   char str2[10];
   for(i=0;i<5;i++)
   {
      p = palindrome_fun(strall[i],str2);
      if(p==1)
        printf("%s is palindrome\n",strall[i]);
      else
        printf("%s is not palindrome\n",strall[i]);
        
   }
}