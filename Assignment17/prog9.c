// 9. Write a C program to sort a string array in ascending order.
#include <stdio.h>
#include<string.h>
void copy_str(char [],char []);

int main()
{
    char source[20]="prabhjot" ,dest[20];
   
   

    // int i, temp, strlen;
    // for (i = 0; str[i]; i++);
    // strlen = i;

    // for (i = 0; i < strlen - 1; i++)
    // {
    //     temp = 0;
    //     for (int j = i + 1; j < strlen; j++)
    //     {
            
    //             if (str[i] > str[j])
    //             {
    //                 temp = str[i];
    //                 str[i] = str[j];
    //                 str[j] = temp;
    //             }
            
    //     }
    // }
       copy_str(dest,source);
       printf("%s",dest);
}

void copy_str(char dest[],char source[])
{
    int i;
    // [strcspn(b,"\n")]='\0';
      for (i = 0; source[i]; i++);
     {
        
        dest[i]=source[i];

     }
     dest[i]='\0';
     
}