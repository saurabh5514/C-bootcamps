#include<iostream>
using namespace std;
class Minutes
{
    int mm;
    public:
    void setM(int x)
    {
        mm = x;
    }
    void display()
    {
          cout<<" Minutes => "<<mm<<endl;
    }
};
class Time
{
    int hh,min;
    public:
      Time(int x,int y)
      {
          hh = x;
          min = y;
      }
      operator Minutes()
      {
          Minutes m1;
          m1.setM(min);
          return m1;
      }
      void display()
      {
          cout<<"Hours => "<<hh<<endl<<" Minutes => "<<min<<endl;
      }
};

int main()
{
   Time t1(2,30);
   t1.display();
   Minutes m1;
  
   m1 = t1;
   m1.display();
}