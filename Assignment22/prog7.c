// 7. Write a program to demonstrate memory leak in C.
#include<stdio.h>
#include<stdlib.h>
int* func()
{
    int *ptr;
    ptr = malloc(sizeof(int));
    return ptr;
}
int main()
{
    int *q;
    q = func();
    printf("%d",q);
}
