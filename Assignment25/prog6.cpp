/* 6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called.*/
#include<iostream>
using namespace std;
class Square
{
     private:
       int num;
     public:
       static int count;
       void sqrt(int n)
       {
            num  = n * n;
            count++;
       }
       void printsquare()
       {
         cout<<" square of number "<< num<<endl;
       }
};
int Square::count = 0;
int main()
{
     class Square s1,s2;
     s1.sqrt(10);
     s1.printsquare();
     s2.sqrt(15);
     s2.printsquare();
     cout<<" function is called "<<Square::count<<endl;

}