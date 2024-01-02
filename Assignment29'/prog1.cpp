
#include <iostream>
using namespace std;
class Complex
{
    int x;
    public:
    Complex()
    {
        
    }
    Complex(int a)
    {
        x = a;
    }
    void printdata()
    {
        cout<<x;
    }
    
};
int main()
{
     int x = 6;
     Complex c1;
     c1 = x;
     c1.printdata();
     return 0;
}
