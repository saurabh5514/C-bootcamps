// 10. Write functions using function overloading to add two numbers having different data types
#include <iostream>
using namespace std;
int add(int ,int);
float add(float ,float);
int main()
{
    int a,b,s = 0;
    float sum;
    cout<<"Enter two number of int type"<<endl;
    cin>>a>>b;
    s = add(a,b);
    cout<<"Addition of two number is "<<s<<endl;
    float x,y;
    cout<<"Enter two number of float type"<<endl;
    cin>>x>>y;
    sum = add(x,y);
    cout<<"Addition of two number is "<<sum<<endl;
}
int add(int a,int b)
{
    int c;
    c = a+b;
    return c;
}
float add(float a,float b)
{
    float c;
    c = a + b;
    return c;
}
