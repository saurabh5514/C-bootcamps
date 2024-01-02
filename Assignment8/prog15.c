// Write a program to draw the following patterns:
#include<stdio.h>
int main()
{

    int i,j;
    for(i=1;i<=5;i++)
    {
        for ( j=1;j<=5;j++)
        {
          if(j>=6-i){
            if(i==3&&j==4||i==4&&j==3||i==4&&j==4){
                printf("   ");
            }
            else{
            printf(" * ");
            }
          }
          else{
            printf("   ");
          }
        }
     printf("\n");   
    }

}


