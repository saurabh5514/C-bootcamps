// 6. Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int a,b;
    cout<<"Enter two number";
    cin>>a>>b;
    cout<<"A = "<<a<<" B = "<<b<<endl;
    swap(a,b);
     cout<<"After swapping call by reference "<<endl;
    cout<<"A = "<<a<<" B = "<<b<<endl;

}
void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
