/*------------5. Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.------------*/
#include<Stdio.h>
int main()
{
    int a[10],i;
    printf("Enter the numbers");
    for(i=0;i<=9;i++)
          scanf("%d",&a[i]);
    int min=a[0];
    for(i=0;i<=9;i++)
    {
       if(min>a[i])
           min=a[i];
    }
    printf("Smallest number from array is %d\n",min);
}
