//  Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter the day number");
    scanf("%d", &x);
    switch (x)
    {
        case 1:
            printf("Happy Monday");
            break;
        case 2:
            printf("Have a beautiful day");
            break;
        case 3:
            printf("Happy Wednesday");
            break;
        case 4:
            printf("Have a blessed Thrushday");
            break;
        case 5:
            printf("Happy Good friday");
            break;
        case 6:
            printf("Happy Saturday");
            break;
        case 7:
            printf("Blessed Sunday");
            break;
        default:
            printf("Enter the correct week day");
    }
}