// Write a function to calculate simple interest. (TSRS)
#include<stdio.h>
float si(float,float,float);
int main()
{
   float p,r,t,s;
   printf("Enter the principal, rate of interest, and time");
   scanf("%f%f%f",&p,&r,&t);
   s=si(p,r,t);
   printf("simple interest is %.3f",s);
}
float si(float p,float r,float t)
{
    float si;
    si=(p*r*t)/100;
    return si;
}