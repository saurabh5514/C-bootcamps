/* 3. Write a C++ program to add two complex numbers using operator overloaded by a
friend function.*/
#include<iostream>
using namespace std;
class Complex
{
     private:
       int a,b;
     public:
        void setdata(int x,int y)
        {
             a = x;
             b = y;
        }
        void showdata()
        {
             cout<<"  "<<a<<" "<<b<<"i"<<endl;
        }
        friend Complex operator+(Complex,Complex);
};
Complex operator+(Complex c1,Complex c2)
{
      Complex temp;
      temp.a = c1.a + c2.a;
      temp.b = c1.b + c2.b;
      return temp;
}
int main()
{
     Complex c1,c2,c3,c4;
     c1.setdata(5,10);
     c1.showdata();
     c2.setdata(10,20);
    c2.showdata();
      c3 = c1 + c2;             //operator+(c1,c2);   operator+ da vich 2 object as a argument pass kita aa
      c3.showdata();
}
