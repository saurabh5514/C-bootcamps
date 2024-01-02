// Write a program to draw the following patterns:
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        char c = 'A';
         for (j = 1; j <= 13; j++)
        {
            if (j <= 8 - i || j >= 6 + i)
            {
                printf("%c", c);
                  if (j < 7)
                {
                    c++;
                }
                else
                {
                    c--;
                }
            }
            else
            {
                printf(" ");
            }
          
        }
        printf("\n");
    }
}