// 3. Write a function to compare two strings.
#include <stdio.h>
int compare_str(char [], char []);
int main()
{
   char str1[20], str2[20];
   int i;
   printf("Enter two strings\n");
   fgets(str1, 20, stdin);
   fgets(str2, 20,stdin);
   int s=compare_str(str1,str2);
   if(s<0){
     printf("dictionary order string");

   }
   if(s==0)
     printf("Same string");
   else
     printf("Not same");
}
int compare_str(char str[], char str1[])
{
   int i,flag;
   for (i = 0; str[i]!=0||str1[i]!=0; i++)
   {
      if (str[i] != str1[i])
      {
           return(str[i]-str1[i]);
          
      }
     
   }
   
   return 0;

      
}