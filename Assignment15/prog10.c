// 10. Write a function in C to count the frequency of each element of an array.
#include<stdio.h>
void count_element(int a[],int n);

int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    count_element(a,n);
    for(int i=0;i<n;i++)
      printf("%d  ",a[i]);
}
void count_element(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int count =1 ;
        for(int j=i+1;j<n;j++)
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
    int count;
     for(int i=0;i<n-1;i+=count)
    {
         count =1 ;
        for(int j=i+1;j<n;j++)
        {
             if(a[i]==a[j])
              {
                count++;
              }
        }
                printf("%d = %d times\n",a[i],count);
    }
}