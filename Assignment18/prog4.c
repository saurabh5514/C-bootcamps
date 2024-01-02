// 4. Write a function to transform string into uppercase
#include <stdio.h>
void upper_case(char[]);
int main()
{
    char str[30];
    printf("Enter the string\n");
    fgets(str, 30, stdin);

    upper_case(str);
}
void upper_case(char str1[])
{
    int i;
    for (i = 0; str1[i]; i++)
    {
        if (str1[i] >= 97 && str1[i] <= 122)
        {
            str1[i] -= 32;
        }
    }
    printf("After converting string \n");
    printf("%s", str1);
}
