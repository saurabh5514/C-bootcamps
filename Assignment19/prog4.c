// 4. Write a program to search a string in the list of strings.
#include<stdio.h>
#include<string.h>
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
int main()
{
    char str[5][50]={"hello","wow","are","you","will"};
    char check[50];
    int i,flag=0;
    printf("Enter the string which you want to search\n");
    fgets(check,50,stdin);
    check[strcspn(check,"\n")]='\0';
    for(i=0;i<5;i++)
    {
        flag = compare_str(check,str[i]);
        if(flag==0)
          break; 
    }
    if(flag==0)
    {
        printf("string available");
    }
    else 
    {
      printf("Not");
    }

}