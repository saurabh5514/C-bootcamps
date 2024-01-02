// 7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int dup_element(int b[],int s);
int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    int d;
    d=dup_element(a,n);
    printf("Total number of duplicate element in array is %d\n",d);
}
int dup_element(int b[],int s)
{
    int count=0;
    printf("Enter the array \n");
    for(int i=0;i<s;i++)
       scanf("%d",&b[i]);
    for(int i=0;i<s-1;i++)
    {
         for(int j=i+1;j<s;j++)
         {
            if(b[i]==b[j])
            {
                count++;
                break;
            }
         }
    }
    return count;
}