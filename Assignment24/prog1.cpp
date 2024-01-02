// 1. Define a function to check whether a given number is a Prime number or not.
#include<iostream>
using namespace std;
int prime_num(int n);
int main()
{
     int num,x;
     cout<<"Enter the number"<<endl;
     cin>>num;
     x = prime_num(num);
     if(x==1)
       cout<<"Not a prime number"<<endl;
     else
       cout<<"Prime numbers"<<endl;
}
int prime_num(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
         if(n % i == 0)
         {
             return 1;
         }
    }
    return 0;
}
