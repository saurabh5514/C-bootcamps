/*10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result.*/
#include<iostream>
using namespace std;
class StaticCount
{
      public:
        static int x;
        void display()
        {
            cout<<"hello"<<endl;
            x++;
        }
        void functiontime()
        {
            cout<<"Func display call "<<x<<" Times"<<endl;
        }
};
int StaticCount:: x = 0;
int main()
{
     StaticCount d1;
     d1.display();
     d1.display();
     d1.display();
     d1.functiontime();
}