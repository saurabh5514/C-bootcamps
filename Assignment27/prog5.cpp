/* 5. Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers */
#include<iostream>
using namespace std;
class Numbers
{
      int x,y,z;
    public: 
      void setdata(int a,int b,int c)
      {
         x = a;
         y = b;
         z = c;
      }
      Numbers operator-()
      {
        Numbers n;
          n.x = -x;
          n.y= -y;
          n.z = -z;
          return n;
      }
      void showdata()
      {
         cout<<"After negating"<<endl;
         cout<<"x = "<<x<<"  y = "<<y<<"  z = "<<z<<endl;
      }
};
int main()
{
     Numbers n1,n2;
     n1.setdata(10,20,30);
     n2 = -n1; // n1.operator-() n1 calls operator- and koi argument pass nhi kita bcz unary operator ta km kita 
     n2.showdata();
}