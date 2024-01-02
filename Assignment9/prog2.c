/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit*/
#include <stdio.h>
int main()
{
    int a, b, x, c = 0;

    for (int i = 0;; i++)
    {
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter the Number of your choice");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
        {
            printf("Enter two numbers");
            scanf("%d %d", &a, &b);
            c = a + b;
            printf("Addition of two number is %d /n", c);
            break;
        }
        case 2:
        {
            printf("Enter two numbers");
            scanf("%d %d", &a, &b);
            c = a - b;
            printf("Subtraction of two number is %d /n", c);
            break;
        }
        case 3:
        {
            printf("Enter two numbers");
            scanf("%d %d", &a, &b);
            c = a * b;
            printf("Multipication of two number is %d /n", c);
            break;
        }
        case 4:
        {
            printf("Enter two numbers");
            scanf("%d %d", &a, &b);
            c = a / b;
            printf("Division of two number is %d /n", c);
            break;
        }
        case 5:
        {
            break;
        }
        default:
            printf("Invalid choice /n");
        }
        if (x == 5)
            break;
    }
}
