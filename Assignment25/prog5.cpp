// 5. Define a class ReverseNumber and define an instance member function to find
// Reverse of a Number using class.
#include<iostream>
using namespace std;
class ReverseNumber 
{
     private:
       int num =0;
     public:
       void reverse_num(int n)
       {
          int rem,rev,i;
          for(i=0;n>0;i++)
          {
                 rem = n % 10;
                 num = num * 10 + rem;
                 n = n/10;
          }
       }
       void printnum()
       {
        cout<<"Reverse of number is "<<num<<endl;
       }
};
int main()
{
     ReverseNumber r1;
     r1.reverse_num(234);
     r1.printnum();
}
