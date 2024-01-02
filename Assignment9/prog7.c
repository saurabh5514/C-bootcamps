/*
7. Program to take the value from the user as input electricity unit charges
and calculate total electricity bill according to the given condition . Using
the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.
*/
#include <stdio.h>
int main()
{
  int unit,flag=0;
  float bill = 1, total = 0,tax=0;
  printf("Enter the unit");
  scanf("%d", &unit);
  for (int i = 1; i <= 4; i++)
  {
    switch(i)
    {
      case 1: 
            switch (unit>=50)
            {
            case 1:
              bill=50*0.50;
              unit=unit-50;
              total+=bill; 
              printf("Bill for first fifty Unit %.3f\n",bill);
              break;
            
            case 0:
               bill=unit*0.50;
               printf("Bill of %d unit is %.3f\n",unit,bill);
               total+=bill;
               flag=1;
               break;
          
            }
             break;

      case 2:
           switch(unit>=100)
           {
             case 1:
               bill=100*0.75;
               unit=unit-100;
               printf("Bill for 50-150 Unit %.3f\n",bill);
               total+=bill;
               break;
             case 0:
               bill=unit*0.75;
               printf("Bill of %d unit is %.3f\n",unit,bill);
               total+=bill;
               flag=1;
               break;
           }
           break;

      case 3:
          switch (unit>100)
          {
          case 1:
            bill=100*1.20;
            unit=unit-100;
            printf("Bill for 150-250 Unit %.3f\n",bill);
            total+=bill;
            break;
          case 0:
            bill=unit*1.20;
            printf("Bill of %d unit is %.3f\n",unit,bill);
            total+=bill;
            flag=1;
            break;
          }
          break;

      case 4:
          switch (unit>250)
          {
          case 1:
            bill=100*1.50;
            unit=unit-250;
            printf("Bill for Above 250 Unit %.3f\n",bill);
            total+=bill;
            break;
          
          case 0:
            bill=unit*1.50;
            printf("Bill of %d unit is %.3f\n",unit,bill);
            total+=bill;
             flag=1;
            break;
          }
           break;    
    }
    if(flag==1){
      break;
    }
  }
  tax=(total*20)/100;
  printf("Adding 20%% subcharge to the amount of bill is %.3f\n",tax);
  total+=tax;
  printf("Total bill is %.3f\n ",total);

}
