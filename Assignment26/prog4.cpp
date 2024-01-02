// 4. Define a class Counter and Write a program to Show Counter using Constructor
#include<iostream>
using namespace std;
class Counter
{
     private:
       int x;
     public:
       Counter(int c)
       {
          x = c;
       }
       void printCounter()
       {
           int i;
           for(i = x;i>=0;i--)
               printf("%d \n",i);
       }
};
int main()
{
     Counter c1(6);
     c1.printCounter();
}
