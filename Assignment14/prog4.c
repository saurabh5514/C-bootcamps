// 4. Write a program to find the greatest number stored in an array of size 10. Take array values from the user.
#include<stdio.h>
int main()
{
     int a[5],i;
    printf("Enter the numbers");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
       
      
    }
    int b=a[0];
    for(i=0;i<=4;i++)
     {
        if(b<a[i])
           b=a[i];
     }
    printf("%d\n",b);
}
