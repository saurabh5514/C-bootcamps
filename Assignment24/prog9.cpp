// 9. Write functions using function overloading to find a maximum of two numbers and
// both the numbers can be integer or real.
#include <iostream>
using namespace std;
int max(int, int);
float max(float, float);
int main()
{
    int a, b, m;
    cout << "Enter two integer number" << endl;
    cin >> a >> b;
    m = max(a, b);
    cout << "Maximum Number from two integer numbers is " << m << endl;
    float x, y, r;
    cout << "Enter two real numbers";
    cin >> x >> y;
    r = max(x, y);
    cout << "Maximum Number from two real numbers is " << r << endl;
}
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
float max(float a, float b)
{
    if (a > b)
        return a;
    else
        return b;
}