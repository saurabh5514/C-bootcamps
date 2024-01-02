/*4.
Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include <stdio.h>
int main()
{
    int x, a, b, c, d;
    for (int i = 0;; i++)
    {
        printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n");
        printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n");
        printf("3. Check whether a given set of three numbers are equilateral triangle or not\n");
        printf("4. Exit\n");
        printf("Enter the number of choice");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter three sides of triangle");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b || a == c || b == c || b == a || c == a || c == b)
            {

                printf("It is isosceles triangles\n");
                break;
            }
            else
            {
                printf("It is not a isosceles triangls\n");
                break;
            }
        case 2:
            printf("Enter three sides of triangle");
            scanf("%d%d%d", &a, &b, &c);

            if ((a * a) + (b * b) == (c * c))
            {

                printf("It is right angled triangle\n");
                break;
            }
            else
            {
                printf("It is not right angles triangle\n");
                break;
            }
        case 3:
            printf("Enter three sides of triangle");
            scanf("%d%d%d", &a, &b, &c);
            if (a == b && b == c || b == a && b == c || c == a && c == b)
            {
                printf("It is equlateral triangle\n");
                break;
            }
            else
            {
                printf("It is not equlateral triangle\n");
                break;
            }
        case 4:
            break;
        default:
            printf("Enter the valid input for checking the types of triangles/n");
        }

        if (x == 4)
            break;
    }
}