// 8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
void dup_element(int b[],int s);
int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
   dup_element(a,n);

}
void dup_element(int b[],int s)
{

    printf("Enter the array \n");
    for(int i=0;i<s;i++)
       scanf("%d",&b[i]);
    for(int i=0;i<s-1;i++)
    {
         for(int j=i+1;j<s;j++)
         {
            if(b[i]>b[j])
            {
                int temp;
               temp=b[i];
               b[i]=b[j];
               b[j]=temp;
            }
           
         }
    }
    for(int i=0;i<s;i++)
      {
         if(b[i]==b[i+1])
         {
            // break;
         }
         else{
            printf("%d ",b[i]);

         }
    
      }
    
}