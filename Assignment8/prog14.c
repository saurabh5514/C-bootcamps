#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i){
            if(i==3&&j==2||i==4&&j==2||i==4&&j==3)
            {
                printf("   ");
              
             }
             else{
                printf(" * ");
             }
            }
            else{
                printf(" ");

            }
           
            

        }
        printf("\n");
    }
}