// 4. Write a function to transform string into lowercase
#include <stdio.h>
void lower_case(char[]);
int main()
{
    char str[30];
    printf("Enter the string\n");
    fgets(str, 30, stdin);
    lower_case(str);
}
void lower_case(char str1[])
{
    int i;
    for (i = 0; str1[i]; i++)
    {
        if (str1[i] >= 65 && str1[i] <= 96)
        {
            str1[i] += 32;
        }
    }
    printf("After converting lowercase\n");
    printf("%s", str1);
}
