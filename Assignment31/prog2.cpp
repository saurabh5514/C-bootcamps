
#include <iostream>
using namespace std;
class base
{
    protected:
     int x,y;
     public:
     void setdata(int a,int b)
     {
         x = a;
         y = b;
     }
};
class derived:public base
{
    int add;
    public:
    void sum()
    {
         add = x + y;
    }
    void getSum()
    {
        cout<<x<<" + "<<y<<" = "<<add<<endl;
    }
};
int main()
{
    derived d1;
    d1.setdata(1,5);
    d1.sum();
    d1.getSum();
    return 0;
}
