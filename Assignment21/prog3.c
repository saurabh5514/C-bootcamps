// 3. Write a function to display employee data. [ Refer structure from question 1 ]
#include<stdio.h>
struct employee
{
    int id,salary;
    char name[50];
};
void display(int x,char n[50],int y)
{
      
    printf("\n------Data of employee---\n");
    printf("Id = %d \n",x);
    printf("Name = %s",n);
    printf("Salary = %d \n",y);
}
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
    display(e1.id,e1.name,e1.salary);
    return 0;
}