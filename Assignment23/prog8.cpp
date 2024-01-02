// 8. Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers";
    cin>>a>>b;
    cout<<"A = "<<a<<" B = "<<b<<endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"After swapping the numbers"<<endl;
    cout<<"A = "<<a<<" B = "<<b<<endl;

}
