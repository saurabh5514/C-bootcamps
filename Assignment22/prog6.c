// 6. Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i,sum=0;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
       printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
       scanf("%d",(ptr+i));
    for(i=0;i<n;i++)
    {
        if(*(ptr+0)<*(ptr+i))
        {
             int temp;
             temp = *(ptr+0);
             *(ptr+0)=*(ptr+i);
             *(ptr+i)=temp;
        }
    }
    printf("The largest element in the array is %d\n",*ptr);
    free(ptr);
}
