/*- 8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor*/
#include<iostream>
using namespace std;
class Bank
{
    private:
       int p,r,t,si;
    public:
       Bank(int b,int rate,int y)
       {
             p = b;
             r = rate;
             t = y;
       }
       void calInterest()
       {
          si = (p * r * t)/100; 
       }
       void printInterest()
       {
           cout<<"Simple interest  = "<<si<<endl;
       }

};
int main()
{
     Bank b1(100000,2,1);
     b1.calInterest();
     b1.printInterest();
}