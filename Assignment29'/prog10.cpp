
/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;
class Rupee;
class Dollar
{
    float d;
    public:
     Dollar(){}
     Dollar(int x)
     {
         d = x;
     }
     void Set_dollar(float x)
     {
         d = x;
     }
     void display()
     {
         cout<<"Dollar => "<<d<<endl;
     }
     int dollar()
     {
         return d;
     }
};
class Rupee
{
    int r;
    public:
     Rupee(){}
     Rupee(int x)
     {
         r = x;
     }
     operator Dollar()
     {
         Dollar d1; 
         float y = r/70;
         d1.Set_dollar(y);
         return d1;
     }
     void display()
     {
         cout<<"Rupee => "<<r<<endl;
     }
     void setRupee(int x)
     {
         Dollar d1;
         r = d1.dollar();
         
     }
};

int main()
{
    Rupee r = 80;
    Dollar d = r;
    d.display();
    r.display();
    
    d = r;
    d.display();
    r.display();
    return 0;
}