// Write a program to print all Prime numbers between two given numbers
#include<stdio.h>
int main()
{
    int num1,num2,count;
    printf("Enter the number of printing prime number between them between ");
    scanf("%d %d",&num1,&num2);
    for(int i=num1;i<num2;i++)
    {
 
        for(int j=2;j<i;j++)
        {
            if(i%j==0){
                break;
            }
            else if(i==j+1){
                printf(" %d ",i);
            }
        }
        
    }
}