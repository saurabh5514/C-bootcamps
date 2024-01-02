/* 9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit. */
#include<iostream>
using namespace std;
class Bill
{
    private:
      int unit;
      float bill = 0;
    public:
      void get(int x)
      {
         unit = x;
      }
      void calculate_Bill()
      {
          if(unit>=100 )
          {
              bill = 1.20 * 100;
              cout<<"Bill 0 - 100 unit  "<<bill<<endl;
              unit = unit - 100;
          }
          else 
          {
             bill = bill * unit;
          }

          if(unit>0 && unit >= 100)
          {
              cout<<"Bill 100 - 200 unit  "<<2*100<<endl;
                 bill += 2 * 100;
               unit = unit - 100;
          } 
          else{
               bill += 2 * unit;
          }
          if(unit>=0)
          {
              cout<<"Bill more than 200 unit  "<<3*unit<<endl;
               bill += 3 * unit;
          }
         
         
      }
      void total_Bill()
      {
         cout<<"Total bill is  "<<bill<<endl;
      }

};
int main()
{
    Bill b1;
    b1.get(365);
    b1.calculate_Bill();
    b1.total_Bill();
}