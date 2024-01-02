/*-----3. Write a program to calculate the sum of all even numbers and sum of all odd 
  numbers, which are stored in an array of size 10. Take array values from the user.-*/
#include<stdio.h>
int main()
{
    int a[10],se=0,so=0,i;
    printf("Enter the numbers");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
           se=se+a[i];
        else 
          so=so+a[i];
    }
    printf("The sum of even number is %d \n",se);
    printf("The sum of odd number is %d \n",so);
}
