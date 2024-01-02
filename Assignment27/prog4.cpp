/* 4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time. */
#include <iostream>
using namespace std;
class Time
{
    int hh, mm, ss;

public:
    friend ostream &operator<<(ostream &output, Time &t1);

    friend istream &operator>>(istream &input, Time &t2);

    int operator==(Time t1)
    {
        if (hh == t1.hh && mm == t1.mm && ss == t1.ss)
            return 5;
        else
            return 0;
    }
};
ostream &operator<<(ostream &output, Time &t1)
{
    output << "Hour : " << t1.hh << endl;
    output << "Minutes :" << t1.mm << endl;
    output << "Seconds : " << t1.ss << endl;
    return output;
}
istream &operator>>(istream &input, Time &t2)
{
    cout << "Enter first time" << endl;
    cout << "Enter hours :";
    input >> t2.hh;
    cout << "Enter Minutes : ";
    input >> t2.mm;
    cout << "Enter seconds :";
    input >> t2.ss;
    return input;
}
int main()
{
    Time t1, t2;
    int c;
    cin >> t1;
    cout << "First time is " << endl;
    cout << t1;
    cin >> t2;
    cout << "Second time is " << endl;
    cout << t2;
    c = t1 == t2;
    if (c == 5)
        cout << "Equal time" << endl;
    else
        cout << "Not equal" << endl;
}
