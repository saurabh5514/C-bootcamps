 /* 5. Define a class Date and write a program to Display Dateand initialise date object
using Constructors.*/
#include<iostream>
using namespace std;
class Date
{
    private:
       int dd,yy,mm;
    public:
      Date(int x,int y,int z)
      {
         dd = x;
         mm = y;
         yy = z;
      }
      void displayDate()
      {
         cout<<dd<<" - "<<mm<<" - "<<yy<<endl;
      }
};
int main()
{
    Date d1(10,5,2021);
    d1.displayDate();
    return 0;
}