
#include <iostream>
using namespace std;

class Invent2
{
    int x, y;
    public:
    Invent2(){}
    Invent2(int a,int b)
    {
        x = a;
        y = b;
    }
    void setvalue(int a,int b)
    {
        x = a;
        y = b;
    }
     void printdata()
    {
        cout<<" x = "<<x<<" y = "<<y;
    }
};
class Invent1
{
    int x,y,m;
    public:
    Invent1(){  }
    Invent1(int a,int b)
    {
       x = a;
       y = b;
    }
    operator Invent2()
    {
        Invent2 i;
        i.setvalue(x,y);
        return i;
    }
    operator float()
    {
        float a;
        a = x+y;
         return a;
    }
    void printdata()
    {
        cout<<" x = "<<x<<" y = "<<y;
    }
    
    
};
int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    float tv;
    tv = s1;
    cout<<"Addition of two numbers "<<tv<<endl;
    d1 = s1;
    d1.printdata();
     return 0;
}