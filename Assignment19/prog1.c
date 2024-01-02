/* 1. Write a program to find the number of vowels in each of the 5 strings stored in two
dimensional arrays, taken from the user.*/
#include<stdio.h>
int main()
{
    char str[5][50];
    int i,j;
    printf("Enter the five strings \n");
    
    for(i=0;i<5;i++)
       fgets(str[i],50,stdin);
    for(i=0;i<5;i++)
    {
             int count=0;
        for(j=0;str[i][j]!=0;j++)
        {
             if(str[i][j]=='a'||str[i][j]=='e'||str[i][j]=='i'||str[i][j]=='o'||str[i][j]=='u'||str[i][j]=='A'||str[i][j]=='E'||str[i][j]=='I'||str[i][j]=='O'||str[i][j]=='U')
             {
                   count++;
              }
        }
        printf("The vowel in string %d is %d\n",i,count);

    }
        
}
