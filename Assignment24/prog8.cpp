// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of
// triangle
#include<iostream>
using namespace std;
float area(float);
float area(float,float);
float area(float,float,float);

int main()
{
    float a,r;
    cout<<"enter radius"<<endl;
    cin>>r;
    a = area(r);
    cout<<"Area of circle is "<<a<<endl;
    float l,b;
    cout<<"enter length and breadth of rectangle"<<endl;
    cin>>l>>b;
    a = area(l,b);
    cout<<"Area of rectangle is "<<a<<endl;
    float base,height,half = 0.5;
    cout<<"enter base and height of triangle"<<endl;
    cin>>base>>height;
    a = area(base,height,half);
    cout<<"Area of triangles is "<<a<<endl;
}
float area(float r)
{
      float a;
      a = (22/7)*r*r;
      return a;
}
float area(float l,float b)
{
    float a;
    a = l * b;
    return a;
}
float area(float base,float height,float half)
{
    float a;
    a = half * base * height;
    return a;
}