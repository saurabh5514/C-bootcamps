// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)
#include <stdio.h>
void prime_fac(int);
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    prime_fac(x);
}
void prime_fac(int x)
{
    int rem = 0;
    int count = 2;
    while (x >1)
    {
        while (x % count == 0)
        {

            x = x / count;
            printf(" %d ", count);
        }
        count++;
    }
   
}