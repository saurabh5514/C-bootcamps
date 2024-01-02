/* 2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time. */
#include <iostream>
using namespace std;
class Time
{
private:
    int hr, mm, ss;

public:
    void set_time(int x, int y, int z)
    {
        hr = x;
        mm = y;
        ss = z;
    }
    void get_time()
    {
        cout << endl
             << hr << " hr " << mm << " min " << ss << " sec" << endl;
    }
};
int main()
{
    Time t1;
    t1.set_time(3, 45, 20);
    t1.get_time();
}
