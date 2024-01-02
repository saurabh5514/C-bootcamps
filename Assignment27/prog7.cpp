/* 7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output- */
#include<iostream>
using namespace std;
class fraction
{
     long numerator;
     long denominator;
     public:
     fraction(long n =0 , long d =0)
     {
         numerator = n;
         denominator = d;
     }
      fraction operator++(int)
      {
          fraction temp;
         temp.numerator = numerator++;
         temp.denominator = denominator++;
         return temp;
      }
      fraction operator++( )
      {
          fraction temp;
          temp.numerator = ++numerator;
          temp.denominator = ++denominator;
           return temp;
      }
     friend ostream &operator<<(ostream &output,fraction &f);
     friend istream &operator>>(istream &input,fraction &f1);

   
};



ostream &operator<<(ostream &output, fraction &f)
{
    output  << f.numerator <<"/"<<f.denominator<< endl;
    return output;
}
istream &operator>>(istream &input, fraction &f1)
{
    cout<<"Numerator : = "; 
    input>> f1.numerator ;
    cout<<"Denominator = ";
    input>>f1.denominator; 
    return input;
}
int main()
{
    fraction f1,f2;
    cout<<"f1 = ";
    cout<<f1;
    cout<<"f2 = ";
    cout<<f2;
    cout<<"Enter first fraction value"<<endl;
    cin>>f1;
    f1++;
    cout<<"f1++ :  ";
    cout<<f1;
    ++f1;
    cout<<"++f1  : ";
    cout<<f1;
    cout<<"Enter Second fraction value"<<endl;
    cin>>f2;
    f2 = ++f1;
    cout<<"f2 = ++f1"<<endl<<"f1 :  ";
    cout<<f1;
    cout<<"f2 :  ";
    cout<<f2;
    cout<<endl;
    f2 = f1++;
    cout<<"f2 = f1++"<<endl<<"f1 :  ";
    cout<<f1;
    cout<<"f2 :  ";
    cout<<f2;
      
}
