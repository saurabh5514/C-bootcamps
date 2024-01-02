// write a program to print size of an int, float ,char and double type variable 
#include <stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;
    printf("size of int is %d \n", sizeof(a));
    printf("size of char is %d \n", sizeof(b));
    printf("size of float is %d \n", sizeof(c));
    printf("size of double is %d \n", sizeof(d));
    return 0;
}