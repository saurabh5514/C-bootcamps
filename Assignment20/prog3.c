// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
void sort(int*,int);

int main()
{
    int num[5];
    int i;
   
    printf("Enter the five numbers");
    for(i=0;i<5;i++)
       scanf("%d",&num[i]);
    sort(num,5);
    for(i=0;i<5;i++)
          printf("%d ",num[i]);


}
void sort(int *ptr,int size)
{
    int i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
           if(*(ptr+i) > *(ptr+j))
           {
            int temp;
            temp=*(ptr+i);
            *(ptr+i)=*(ptr+j);
            *(ptr+j)=temp;
           }
        }
    }
  

 
}