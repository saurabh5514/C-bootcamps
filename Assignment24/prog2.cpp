// 2. Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int highest_digit(int );
int main()
{
     int num,res;
     cout<<"Enter a number";
     cin>>num;
     res = highest_digit(num);
     cout<<"Highest digit in number is "<<res<<endl;

}
int highest_digit(int num)
{
    int i,rem,temp=num%10;
    for(i=0;num>0;i++)
    {
         rem = num % 10;
         num = num/10;
         if(temp<rem)
             temp = rem;
        
    }
   return temp;
}