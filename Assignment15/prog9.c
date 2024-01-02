// 9. Write a function in C to merge two arrays of the same size sorted in descending order.
#include<stdio.h>
void merge_arr(int a[],int b[],int c[],int fn,int sn);
int main()
{
    int fn,sn;
    printf("Enter the size of first array");
    scanf("%d",&fn);
    printf("Enter the size of second array");
    scanf("%d",&sn);
    int b[fn],c[sn],a[fn+sn];
    printf("Enter the element of first array\n");
    for(int i=0;i<fn;i++)
       scanf("%d",&b[i]);
    printf("Enter the element of second array\n");
    for(int i=0;i<sn;i++)
       scanf("%d",&c[i]);
    merge_arr(a,b,c,fn,sn);
   
}
void merge_arr(int a[],int b[],int c[],int fn,int sn)
{
    for(int i=0;i<fn;i++)
        a[i]=b[i];
    for(int i=0;i<fn+sn;i++)
          a[i+fn]=c[i];
     printf("after merging the array\n");
    for(int i=0;i<fn+sn;i++)
       printf("%d ",a[i]);
    for(int i=0;i<fn+sn-1;i++)
    {
        for(int j=i+1;j<fn+sn;j++)
        {
            if(a[i]<a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\nArray in decending order\n");
     for(int i=0;i<fn+sn;i++)
       printf("%d ",a[i]);
}