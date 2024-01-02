// Write a program to count digits in a given number
#include <stdio.h>
int main()
{
    int num = 2525445, i, cd = 0;
    for (i =1; i <= num; i++)
    {
        num=num/10;
       if(num==0)
       {
      
        break;
       }
    }
    printf("the counting of digit in given number is %d ",i);
    return 0;
}