// write a program which takes the month number as input and display the number day in that month 
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the month number");
    scanf("%d",&month);
    if(month==1)
    {
        printf("The number of day in January is 31");
    }
    else if(month==2)
    {
        printf("The number of day in february is 28");
    }
     else if(month==3)
    {
        printf("The number of day in March is 31");
    }
     else if(month==4)
    {
        printf("The number of day in April is 31");
    }
     else if(month==5)
    {
        printf("The number of day in May is 31");
    }
     else if(month==6)
    {
        printf("The number of day in June is 30");
    }
     else if(month==7)
    {
        printf("The number of day in July is 31");
    }
     else if(month==8)
    {
        printf("The number of day in August is 30");
    }
     else if(month==9)
    {
        printf("The number of day in September is 31");
    }
     else if(month==10)
    {
        printf("The number of day in October is 30");
    }
     else if(month==11)
    {
        printf("The number of day in November is 31");
    }
    else if(month==12){
        printf("The number of day in December is 30");
    }
    else{
        printf("Please enter the valid month");
    }
    return 0;
}