/* 9. Define a class Circle and define an instance member function to find the area of the
circle*/
#include<iostream>
using namespace std;
class Circle
{
     private:
       float area;
     public:
       void area_circle(int r)
       {
           area = 22/7 * r * r;
           cout<<"Area of rectangle is "<<area<<endl;
       }
};
int main()
{
     Circle r1;
     r1.area_circle(5);
}