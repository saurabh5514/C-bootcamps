// 1. Define a structure Employee with member variables id, name, salary

#include<stdio.h>
struct employee
{
    int id,salary;
    char name[50];
  
};
int main()
{
    struct employee e1;
  
     printf("Enter the id \n");
    scanf("%d",&e1.id);
    fflush(stdin);
    printf("Enter your name\n");
    fgets(e1.name,50,stdin);
    printf("Enter the salary\n");
    scanf("%d",&e1.salary);
    printf("\n------Data of employee---\n");
    printf("Id = %d \n",e1.id);
    printf("Name = %s",e1.name);
    printf("Salary = %d \n",e1.salary);
  
}