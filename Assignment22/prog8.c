// Write a program to demonstrate dangling pointers in C
#include<stdio.h>
#include<stdlib.h>
int func()
{
    int p;
    return &p;
}
int main()
{
    int *ptr;
    ptr =(int*) func();//dangling pointer
    *ptr=4;
}
