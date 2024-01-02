// 6. Write a function to sort employees according to their names [refer structure from question 1]
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
int compare_str(char [], char []);
void copystring(char [],char []);

struct employee
{
    int id, salary;
    char name[50];
};
struct employee input()
{
    struct employee e1;
       printf("Enter the id \n");
        scanf("%d", &e1.id);
        fflush(stdin);
        printf("Enter your name\n");
        fgets(e1.name, 50, stdin);
        e1.name[strcspn(e1.name,"\n")]='\0';
        printf("Enter the salary\n");
        scanf("%d", &e1.salary);
        fflush(stdin);

        return e1;

}
void printdata(struct employee e)
{
    printf("ID = %d \t Name = %s \t salary = %d\n",e.id,e.name,e.salary);
}
// functions for sorting strings 
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

void sortbyName(struct employee e[])
{
     int i,j;
     struct employee temp;
    for (i = 0; i < 3- 1; i++)
    {
            for (int j = i + 1; j < 3; j++)
            {
              int result=compare_str(e[i].name,e[j].name);
              if(result>0)
              {
                 temp = e[i];
                 e[i] = e[j];
                 e[j]=temp;  
                   
              }
            }
        
    }
}
int main()
{
    struct employee e1[3];
    int i;
    for (i = 0; i < 3; i++)
    {
       e1[i]=input();
    }

   sortbyName(e1);
   for(i=0;i<3;i++)
   {
    printdata(e1[i]);
   }
   return 0;
}