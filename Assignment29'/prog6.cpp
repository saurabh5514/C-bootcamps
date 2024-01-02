#include<iostream>
using namespace std;
class Time
{
    int min;
    public:
      Time(int x)
      {
          min = x/60;
      }
      void display()
      {
          cout<<"Time in Minutes => "<<min<<endl;
      }
};
int main()
{
    int duration;
    cout<<"Enter time in seconds : "<<endl;
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}