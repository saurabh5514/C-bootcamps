// Program to Convert even number into its upper nearest odd number Switch Statement.
#include<stdio.h>
int main()
{
    int num,check;
    printf("Enter the number");
    scanf("%d",&num);
    check=(num%2==0);
    switch(check)
    {
        case 1:
           num=num+1;
           printf("Conver even number into neares odd is\n %d" ,num);
           break;
        case 0:
            printf("It is odd number");
            break;
    }
}
