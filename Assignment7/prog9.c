// Write a program to check whether a given number is an Armstrong number or not
#include <stdio.h>
#include<math.h>
int main()
{
    int num, digit=0, sum=0, rem, temp,count=0;
    printf("Enter the number");
    scanf("%d", &num);
    digit=num;
   temp=num;


    while(digit>0)
    {
        digit=digit/10;
        count++;
    }
      printf("%d\n",count);

    while(num>0)
    {  
      
        rem = num % 10;
        sum = sum + pow(rem,count);
        num = num / 10;
    }
    if (temp == sum)
    {
        printf("It is armstrong number");
    }
    else
        printf("It is not armstrong number");

  

   

}
