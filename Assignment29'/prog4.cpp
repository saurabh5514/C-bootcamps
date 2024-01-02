#include <iostream>
using namespace std;
class item
{
     int x;
     public:
     item(){}
   
    void setX(int m)
    {
        x = m;
    }
     void printdata()
    {
        cout<<"Multiply is " <<x;
    }
    
};
class Product
{
    int x,y,m;
    public:
  
    void setdata(int a,int b)
    {
       x = a;
       y = b;
    }
   
    operator item()
    {
        item i1;
        i1.setX(x*y);
        return i1;
    }
    void printdata()
    {
        cout<<x;
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