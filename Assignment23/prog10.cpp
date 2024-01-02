// 10. Write a C++ program to add all the numbers of an array of size 10.
#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,sum=0;
    cout<<"Enter the 10 elements";
    for(i=0;i<10;i++)
    {
      cin>>arr[i];
      sum += arr[i];

    }
    cout<<"Sum of 10 element of array is "<<sum<<endl;
    

}