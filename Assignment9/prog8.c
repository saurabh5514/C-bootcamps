// Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
#include <stdio.h>
int main()
{
    int num, c;
    printf("Enter the number");
    scanf("%d", &num);
    c = num > 0;
   
    switch (c)
    {
    case 1:
        num = -num;
        printf("Positive number convert into negative is %d\n", num);
        break;
    case 0:
        num = (num * -1);
        printf("Negative number convert into Positive is %d\n", num);
    }
}