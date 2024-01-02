/* 1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/
#include<iostream>
using namespace std;
class Complex
{
     int a,b,c;
     public:
     void setData(int x,int y)
     {
         a = x;
         b = y;
     }
     Complex operator+(Complex x)
     {
         Complex temp;
         temp.a  = a + x.a;
         temp.b = b + x.b;
         return temp;
     }
     Complex operator-(Complex x)
     {
         Complex temp;
         temp.a  = a - x.a;
         temp.b = b - x.b;
         return temp;
     }
      Complex operator*(Complex x)
     {
         Complex temp;
         temp.a  = a * x.a;
         temp.b = b * x.b;
         return temp;
     }
     int operator==(Complex x)
     {
         Complex temp;
         if(a == x.a && b == x.b)
            return 2;
         else 
            return 1;
          
     }
     void showData()
     {
        cout<<" a = "<<a<<" b = "<<b<<endl;
     }
    

};
int main()
{
    Complex c1,c2,c3,c4,c5;
    int x;
    c1.setData(3,3);
    c1.showData();
    c2.setData(3,3);
    c2.showData();
    c3 = c1 + c2 ;// c1 caller operator c1.operator+(c2)
    c3.showData();
    c4 = c1 - c2;
    c4.showData();
     c5 = c1 * c2;
    c5.showData();
     x = c1==c2;
     if(x==2)
        cout<<"Both are equal"<<endl;
    else 
        cout<<"not equal"<<endl;
    //  cout<<c5;
    // c5.showData();

}