//6. Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the Year");
    scanf("%d",&x);
    y=(x%4==0)||(x%100==0);
    switch(y)
    { 
      case 1:
        printf("It is leap year");
        break;
    
      case 0:
      printf("It is not a leap year");
        break;
    }
}