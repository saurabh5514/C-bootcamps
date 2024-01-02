/* 1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number*/
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, imag;

public:
    void set_value(int x, int y)
    {
        real = x;
        imag = y;
    }
    void print_num()
    {
        cout << "Complex number is  " << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    Complex c1;
    c1.set_value(3, 5);
    c1.print_num();
    cout << endl;
}