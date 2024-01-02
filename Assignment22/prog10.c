// 10. Find out the maximum and minimum from an array using dynamic memory allocation in C.
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int i;
    ptr=malloc(sizeof(int)*10);
    printf("Enter the numbers\n");
    for(i=0;i<10;i++)
      scanf("%d",ptr+i);
    for(i=0;i<10;i++)
    {
        if(*(ptr+0)>*(ptr+i))
        {
            int temp;
           temp = *(ptr+0);
           *(ptr+0) = *(ptr+i);
           *(ptr+i)=temp;
        }
    }
   printf("Minimum number is %d \n",*(ptr+0));
    for(i=0;i<10;i++)
    {
        if(*(ptr+0)<*(ptr+i))
        {
            int temp;
           temp = *(ptr+0);
           *(ptr+0) = *(ptr+i);
           *(ptr+i)=temp;
        }
    }
   printf("Maximum number is %d \n",*(ptr+0));
   
}