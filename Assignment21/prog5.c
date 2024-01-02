// 5. Write a function to sort employees according to their salaries [ refer structure from question 1]
#include <stdlib.h>
#include <stdio.h>
#include<string.h>
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
        return e1;

}
void sortbyPrice(struct employee e[])
{
    int i, j, index;
    struct employee temp;
    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (e[i].salary < e[j].salary)
            {
              
                temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }
}
void printdata(struct employee e)
{
    printf("ID = %d \t Name = %s \t salary = %d\n",e.name,e.salary);
}
int main()
{
    struct employee e1[10];
    int i;
    for (i = 0; i < 10; i++)
    {
       e1[i]=input();
    }

   sortbyPrice(e1);
   for(i=0;i<10;i++)
   {
    printdata(e1[i]);
   }
   return 0;
}