/* 7. Define a class Greatest and define instance member function to find Largest among
   3 numbers using classes .  */
#include<iostream>
using namespace std;
class Greatest
{
    private:
       int a,b,c;
    public:
       void greatest_num(int x,int y,int z)
       {
          a = x , b = y, c = z;
          if(a > b && a > c)
              cout<<a<<" is greater"<<endl;
          else if(b > a && b > c)
              cout<<b<<" is greater"<<endl;
          else 
             cout<<c<<" is greater"<<endl;
       }
};
int main()
{
     Greatest g1;
     g1.greatest_num(10,20,30);
}

