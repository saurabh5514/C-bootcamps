/* 4. Define a class LargestNumber and define an instance member function to find the
Largest of three Numbers using the class.*/
#include<iostream>
using namespace std;
class LargestNumber
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
     LargestNumber l;
     l.greatest_num(10,20,30);
}

