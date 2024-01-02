// 5. Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.
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
        printf("%d ",*(ptr+i));
        sum += *(ptr+i);
    }

    printf("\nSum of all elements inputd in array is %d \n",sum);
    free(ptr);
}