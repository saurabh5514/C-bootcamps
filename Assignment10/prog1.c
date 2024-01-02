// 1. Write a function to calculate the area of a circle. (TSRS)
#include<stdio.h>
float area(int);
int main()
{
    float ac,radius;
    printf("Enter the radius of circle ");
    scanf("%f",&radius);
    ac=area(radius);
    printf("Area of circle is %.3f",ac);
    return 0;
}
float area(int r)
{
    float a=0;
    a=3.14*r*r;
    return a;

}

