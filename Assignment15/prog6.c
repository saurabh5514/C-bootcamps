// 6. Write a function in C to read n number of values in an array and display it in reverse order.
#include<stdio.h>
void reverse_arr(int b[],int c);

int main()
{
    int n;
    printf("Enter the size of array");
    scanf("%d",&n);
    int a[n];
    reverse_arr(a,n);

}
void reverse_arr(int b[],int s)
{
    printf("Enter the array");
    for(int i=0;i<s;i++)
         scanf("%d",&b[i]);
    printf("Array in reverse order\n");
    for(int i=s-1;i>=0;i--)
       printf("%d ",b[i]);
}