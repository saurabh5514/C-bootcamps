// 8. Write a function to count words in a given string

#include <stdio.h>
int count_word(char str1[]); 

int main()
{
    char str[50];
    printf("Enter the string\n");
    fgets(str, 50, stdin);
    str[strcspn(str,"\n")]=0;
    int w = count_word(str);
  
    printf("total word in the string %d", w);
}
int count_word(char str1[]) 
{
    int i, count = 1;
    
    for (i = 0; str1[i]; i++)
    {
           if(str1[i]==' '&& str1[i+1]!=' ')
           {
              count++;
           }
    }
    return count;
}