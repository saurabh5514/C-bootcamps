// 4. Write a program to input and print text using dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    ptr = (char *)calloc(500, sizeof(char));
    printf("Enter the String\n");
    fgets(ptr, 500, stdin);
    printf("\n*****Printing the string*****\n");
    printf("%s", ptr);
    free(ptr);
}
