/*5. Write a function to find the first occurrence of adjacent duplicate values in the array.
      Function has to return the value of the element.*/
#include<stdio.h>
int adj_dup(int a[],int n);
int main()
{
    int n,ad;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    ad=adj_dup(a,n);

    printf("The first occurence of adjacent duplicate value is %d\n",ad);
}
int adj_dup(int a[],int n)
{
    printf("Enter the array");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            return a[i];
        }
        
    }
}