// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.
#include <stdio.h>
int compare_str(char str[], char str1[])
{
   int i;
   for (i = 0; str[i]!=0||str1[i]!=0; i++)
   {
      if (str[i] != str1[i])
      {
          return(str[i]-str1[i]);
      }
     
   }
   return 0;
}

void copystring(char ws[],char st[])
{
    int i;
    for(i=0;st[i];i++)
      {    
        ws[i]=st[i];
      }
    ws[i]='\0';
}
int main()
{
    int i, j;
    char str[10][50];
    printf("Enter the name of 10 cities\n");
    for (i = 0; i < 10; i++)
        fgets(str[i], 50, stdin);

    for (i = 0; i < 10 - 1; i++)
    {
            for (int j = i + 1; j < 10; j++)
            {
              int result=compare_str(str[i],str[j]);
              if(result>0)
              {
                char temp[50];
                
                copystr(temp,str[i]);
                copystr(str[i],str[j]);
                copystr(str[j],temp);
                   
              }
            }
        
    }
    printf("After sorting strings\n");
    for (i = 0; i < 10; i++)
        printf("%s", str[i]);
}

