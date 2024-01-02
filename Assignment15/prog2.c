// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int small_num(int a[],int n);
int main()
{
    int n,s;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n];
    s=small_num(a,n);
    printf("Smallest Number in Array %d \n",s);
}
int small_num(int a[],int n)
{
    printf("Enter the array\n");
    for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[0]>a[i])
        {
            a[0]=a[i];
        }
    }
    return a[0];
}