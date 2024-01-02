/* 2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time) */
#include<iostream>
using namespace std;
class Time
{
     private:
      int h,m,s;
     public:
       void setTime(int x,int y,int z)
       {
            h = x;
            m = y;
            s = z;
       }
       void showTime()
       {
             cout<<h<<" hrs "<<m<<" min "<<s<<" sec "<<endl;
       }
       void normalize()
       {
            if(h>12)
            {
                h = h - 12;
            }
            if(m>60)
            {
                h += m / 60;
                m = m % 60;
            }
            if(s>60)
            {
                m += s / 60;
                s = s % 60;
            }
       }
       Time add(Time t)
       {
           Time temp;
           temp.h = h + t.h;
           temp.m = m + t.m;
           temp.s = s + t.s;
           return temp;
       }

};
int main()
{
     class Time t1,t2,t3;
     t1.setTime(10,70,70);
     t1.normalize();
     t2.setTime(10,50,30);
     t2.normalize();
     t1.showTime();
     t2.showTime();
     t3 = t1.add(t2);
     t3.normalize();
     t3.showTime();

}