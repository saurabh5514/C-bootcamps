// 5. Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.

#include<stdio.h>
int trace_a(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]=='@')
        {
            return 1;
        }
    }
   return 0;
}

int main()
{
    
    char str[10][50]={"prabhjot@","aman@","lovely@","not","nothing","notyboy","hussen@"};
    int atthe=0,i;
    for(i=0;i<7;i++)
    {
      atthe = trace_a(str[i]);
      if(atthe==1)
      {
          printf("%s",str[i]);
          printf("\n");
      }
    }
}