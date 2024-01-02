// Write a program to draw the following patterns:
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
            char c='A';

        for(j=0;j<=7;j++)
        {
            if(j>=i&&j<=8-i){
                
                printf("%c",c);
                 if(j<4)
                {
                   c++;
                }
                else{
                    c--;
                }
            }
            else{
                printf(" ");
            }
           
        }
        printf("\n");
    }
}