// 10. Define a class Area and define instance member functions to find the area of the
// different shapes like square, rectangle , circle etc.
#include <iostream>
using namespace std;
class Area
{
private:
    float a;

public:
    void area_circle(float r)
    {
        a = (22 / 7) * r * r;
        cout << "Area of Circle is " << a << endl;
    }
    void area_rect(float l, float b)
    {
        a = l * b;
        cout << "Area of Rectangle is " << a << endl;
    }
    void area_square(float s)
    {
        a = s * s;
        cout << "Area of square is " << a << endl;
    }
};
int main()
{
    Area a1;
    a1.area_circle(10);
    a1.area_rect(10, 20);
    a1.area_square(5);
}