// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class Cube
{
    private:
      int v;
    public:
       Cube( int x )
       {
           v = (x * x * x);
       }
       void showVolume()
       {
          cout<<"Volume of Cube "<<v<<endl;
       }

};
int main()
{
     Cube c1(10);
     c1.showVolume();
}
