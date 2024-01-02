
#include <iostream>
using namespace std;
class base
{
    protected:
    int m1,m2,m3;
    public:
      void setMarks(int x,int y,int z)
      {
          m1 = x;
          m2 = y;
          m3 = z;
      }
};
class derived:public base
{
    protected:
    int total;
   public:
     void totalper()
     {
         total = m1 + m2 + m3;
     }
};
class derived1 : public derived
{
      float per;
      public:
       void calPer()
       {
            per = (total * 100)/300;
       }
       void displayPer()
       {
           cout<<"Percentage is "<<per<<endl;
       }
};
int main()
{
    derived1 d1;
    d1.setMarks(30,40,50);
    d1.totalper();
    d1.calPer();
    d1.displayPer();
    return 0;
}
