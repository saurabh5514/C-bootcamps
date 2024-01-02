// 7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
int main()
{
    int a[5],i,j;
    printf("Enter the numbers");
    for(int i=0;i<=4;i++)
       scanf("%d",&a[i]);
    for(int i=0;i<=3;i++)
    {
        for(j=i+1;j<=4;j++)
         {
            if(a[j]>a[i])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
         }
    }
    printf("The second greatest value is %d",a[1]);
}
