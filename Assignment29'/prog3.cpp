#include <iostream>
using namespace std;
class Product
{
    int x,y;
    public:
  
    void setdata(int a,int b)
    {
       x = a;
       y = b;
    }
    int multi()
    {
        return x*y;
    }
    void printdata()
    {
        cout<<x;
    }
    
};
class item
{
     int x;
     public:
     item(){}
     item(Product p1)
     {
         x = p1.multi();
     }
     void printdata()
    {
        cout<<"Multiply is " <<x;
    }
    
};
int main()
{
    item i1;
    Product p1;
     p1.setdata(6,2);
     i1 = p1;
     i1.printdata();
     return 0;
}
