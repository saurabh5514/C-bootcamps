// 2. Write a C++ program to overload unary operators that is increment and decrement
#include<iostream>
using namespace std;
class unary
{
     int a,b;
     public:
      void setData(int x)
       {
            a = x;
       }
        void setDataB(int x)
       {
            b = x;
       }
       unary operator++()
       {
          unary x;
          x.a = ++a;
          return x;
       }
       unary operator++(int)
       {
          unary x;
          x.a = a++;
          return x;
       }
        unary operator--()
       {
          unary x;
          x.b = --b;
          return x;
       }
       unary operator--(int)
       {
          unary x;
          x.b = b--;
          return x;
       }
       void showdata()
       {
          cout<<"a = "<<a<<endl;
       }
       void showdataB()
       {
          cout<<"b = "<<b<<endl;
       }
};
int main()
{
     unary u1,u2,u3,u4,u5,u6,u7,u8;
     u1.setData(1);
     u2 = ++u1; // Pre increment u1 operator ++ nu  call kita
     u2.showdata();
     u3.setData(3);
     u4 = u3++; // Post increment u3.operator++(1);
      
     
     u4.showdata();
     u5.setDataB(5);
     u6 = --u5; // Pre decrement
     u6.showdataB();
     u7.setDataB(8);
     u8 = u7--;   // Post decrement
     u8.showdataB();
    
}
