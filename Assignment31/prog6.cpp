#include<iostream>
#include<conio.h>
using namespace std;
class two;
class one
{
     int x;
     public:
     void setX(int a)
     {
           x = a;   
     }
     void getX()
     {
           cout<<" X =  "<<x<<endl;
     }
     friend void swap(one& ,two& );
};

class two
{
     int y;
     public:
     void setY(int a)
     {
           y = a;   
     }
     void getY()
     {
           cout<<" Y =  "<<y<<endl;
     }
     friend void swap(one& ,two& );
};
void swap(one &o1,two &t1)
{
       int temp;
       temp = o1.x;
       o1.x = t1.y;
       t1.y = temp;
}
int main()
{
     one o;
     two t;
     o.setX(5);
     o.getX();
     t.setY(12);
     t.getY();
     swap(o,t);
     o.getX();
     t.getY();
     
}
