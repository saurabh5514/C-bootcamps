// 7. Write a program to count the number of vowels and consonants in a string using a pointer.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[50], *ptr;
    char vl[5] = "aeiou", *vowel;
    vowel = vl;
    ptr = str;
    int i, j, l;
    int v = 0, c = 0;
    printf("Enter the string\n");
    fgets(str, 50, stdin);
    str[strcspn(str, "\n")] = '\0';
    for (i = 0; i < 5; i++)
    {
        for (j = 0; ptr[j]; j++)
        {
            if (vowel[i] == ptr[j] || vowel[i] - 32 == str[j])
            {
                v++;
            }
        }
        l = j;
    }
    c = l - v;
    printf("The alphabet is %d and constant is %d\n", v, c);
}