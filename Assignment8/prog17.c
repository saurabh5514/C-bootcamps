// Write a program to draw the following patterns:
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j>=i&&j<=10-i)
            {
               if(i==4&&j==5 ||i==3&&(j>=4&&j<7)||i==2&&(j>2&&j<8) ){
              printf(" ");
            }
            else{
             printf("*");
            }
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}