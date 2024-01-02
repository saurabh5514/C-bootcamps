// 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]
#include <stdio.h>
struct employee
{
    int id, salary;
    char name[50];
};
int highest_sal(int a[])
{
    int i, index;
    for (i = 0; i < 10; i++)
    {
        if (a[0] < a[i])
        {
            int temp;
            temp = a[i];
            a[i] = a[0];
            a[0] = temp;
            index = i;
        }
    }
    return index;
}
int main()
{
    struct employee e1[10];
    int i, a[10], high;
    for (i = 0; i < 10; i++)
    {
        printf("Enter the id \n");
        scanf("%d", &e1[i].id);
        fflush(stdin);
        printf("Enter your name\n");
        fgets(e1[i].name, 50, stdin);
        printf("Enter the salary\n");
        scanf("%d", &e1[i].salary);
        a[i] = e1[i].salary;
    }

    high = highest_sal(a);
    printf("\n-----------Highest salary of employe is -------------\n");
    printf("Id = %d \n", e1[high].id);
    printf("Name = %s", e1[high].name);
    printf("Salary = %d \n", e1[high].salary);
}