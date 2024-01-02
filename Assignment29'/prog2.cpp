#include <iostream>
using namespace std;
class Complex
{
    int x,y;
    public:
  
    void setdata(int a,int b)
    {
       x = a;
       y = b;
    }
    operator int()
    {
         int z;
         z =x + y;
         return z;
    }
    void printdata()
    {
        cout<<x;
    }
    
};
int main()
{
    int x;
     Complex c1;
     c1.setdata(1,2);
     x = c1;
     cout<<x;
     return 0;
}