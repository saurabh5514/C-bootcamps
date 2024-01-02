// Write a program to draw the following patterns:
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        int k = 1, z = 1, x = 2, y = 3;
        for (j = 1; j <= 4; j++)
        {
            if (j >= 5 - i)
            {
                printf("%d", k++);
            }

            else
            {
                printf(" ");
            }
        }
        for (j = 5; j <= 7; j++)
        {
            if (i >= 2 && j <= 3 + i)
            {

                if (i == 2 && j >= 5)
                {
                    printf("%d", z);
                }
                if (i == 3 && j >= 5)
                {
                    printf("%d", x--);
                }
                if (i >= 4 && j >= 5)
                {
                    printf("%d", y--);
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