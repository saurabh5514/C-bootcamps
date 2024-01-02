// C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x,y;
    printf("Enter the cofficient of x^2 ,x and constant");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-4*a*c;
    
    switch (d>0)
    {
    case 1:
          printf("Roots are real and imaginary\n");
          x=(-b+sqrt(d))/(2*a);
          y=(-b-sqrt(d))/(2*a);
          printf("Roots are %f %f",x,y);
        break;
    case 0:
        switch(d<0)
        {
          case 1:
            printf("Both roots are imaginary\n");
               x=(-b+sqrt(d))/(2*a);
               y=(-b-sqrt(d))/(2*a);
             printf("Roots are %f %f",x,y);
             break;
          case 0:
            printf("Both roots are equal\n");
               x=-b/(2*a);
             printf("Roots are %f ",x); 
             break;   
        }          
    }
}