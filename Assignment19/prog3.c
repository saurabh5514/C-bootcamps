// 3. Write a program to read and display a 2D array of strings in C language.
#include <stdio.h>
int main()
{
    char str[4][50];
    int i;
    printf("Enter the strings\n");
    for (i = 0; i < 4; i++)
        fgets(str[i], 50, stdin);

    printf("Printing string of 2d array \n");
    for (i = 0; i < 4; i++)
        printf("%s", str[i]);
}