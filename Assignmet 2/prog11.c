#include<stdio.h>
int main()
{
//    1usd = 76.23Inr
      float iNr,usd;
      printf("Enter the value in INR for converting into USD");
      scanf("%f",&iNr);
      usd=iNr/76.23;
      printf("the value of INR is %f and the value of Usd is %f",iNr,usd);
}