// 7. Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int ,int, int =0);
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    int ad = add(a,b);
    cout<<"addtion of two number is "<<ad<<endl;
    int c;
    cout<<"Enter third number";
    cin>>c;
    ad = add(a,b,c);
    cout<<"addtion of two number is "<<ad<<endl;
}
int add(int a,int b,int c)
{
    int z;
    z = a + b + c;
    return z;
}