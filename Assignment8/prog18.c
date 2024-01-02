// Write a program to draw the following patterns:
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 9; j++)
        {

            if (j >= 6 - i && j < 5 + i)
            {
                if (i > 5)
                {
                    if (j >= i - 4 && j <=14 - i)
                    {
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                  
                }
                else{
                       printf("*");
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