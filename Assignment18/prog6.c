/*  6. Write a function to check whether a given string is an alphanumeric string or not.
          (Alphanumeric string must contain at least one alphabet and one digit)  */

#include <stdio.h>
int alpha_numeric(char[]);
int main()
{
    int s;
    char str[50];
    printf("Enter the string\n");
    fgets(str, 50, stdin);
    s = alpha_numeric(str);
    if (s == 1)
        printf("Alphanumeric String\n");
    else
        printf("Not Alphanumeric String\n");
}
int alpha_numeric(char str1[])
{
    int i, a = 1, b = 1;
    for (i = 0; str1[i]; i++)
    {
        if ((str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] >= 'a' && str1[i] <= 'z'))
        {
            a = 5;
        }
        if (str1[i] >= '0' && str1[i] <= '9')
        {
            b = 5;
        }
    }

    if (a == 5 && b == 5)
        return 1;
    else
        return 0;
}
