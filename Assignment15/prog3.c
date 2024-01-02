// 3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
void sort_arr(int a[],int x);

int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n],b[n];
   
        sort_arr(a,n);

}
void sort_arr(int a[],int x)
{
    printf("Enter the array");
    for(int i=0;i<x;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<x-1;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(a[i]>a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<x;i++)
         printf("%d\n",a[i]);
}