/*   4. Write a function to rotate an array by n position in d direction. The d is an indicative
     value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
       d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ) */

#include <stdio.h>
void right_rot(int a[], int n);
void left_rot(int a[], int n);

int main()
{
  int n, c, r;
  printf("Enter the choice 0 for left and 1 for right");
  scanf("%d", &c);
  printf("Enter the number n for rotating right");
  scanf("%d", &r);
  printf("Enter the size of array");
  scanf("%d", &n);
  int a[n];
  printf("Enter the array");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("After rotating the array");
  if (c == 1)
  {
    for (int i = 0; i < r; i++)
      right_rot(a, n);
    // for printing
    for (int i = 0; i < n; i++)
      printf("%d ", a[i]);
  }
  else if (c == 0)
  {
    for (int i = 0; i < r; i++)
      left_rot(a, n);
    // for printing
    for (int i = 0; i < n; i++)
      printf("%d ", a[i]);
  }
  else
  {
    printf("Please enter the correct choice");
  }
}
void right_rot(int a[], int n)
{
  int temp;
  temp = a[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    a[i + 1] = a[i];
  }
  a[0] = temp;
}
void left_rot(int a[], int n)
{
  int temp;
  temp = a[0];
  for (int i = 0; i < n; i++)
  {
    a[i] = a[i + 1];
  }
  a[n - 1] = temp;
}
