/* 8. Define a class Rectangle and define an instance member function to find the area of
the rectangle.*/
#include<iostream>
using namespace std;
class Rectangle
{
     private:
       int area;
     public:
       void area_rect(int l,int b)
       {
           area = l * b;
           cout<<"Area of rectangle is "<<area<<endl;
       }
};
int main()
{
     Rectangle r1;
     r1.area_rect(10,10);
}

