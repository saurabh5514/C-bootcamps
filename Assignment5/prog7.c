// write a program to print the first N even natural numbers in reverse order 
#include<stdio.h>
int main()
{
       int even,n;
    printf("Enter the number for printing the n even numbers in reverse order \n ");
    scanf("%d",&n);
    for(even=n;even>=2;even=even-2)
    {
        printf("\n%d\n",even);
    }
}