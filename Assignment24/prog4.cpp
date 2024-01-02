// 4. Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int fact(int);
int combination(int , int );
void pascal(int );
int main()
{
    int rows;
    cout<<"Enter rows";
    cin>>rows;
    pascal(rows);
}
int fact(int num)
{
    int i,fact=1;
     for(i=num;i>=1;i--)
       fact=fact*i;
    return fact;
}
int combination(int n, int r)
{
    int comb;
    comb = fact(n) / (fact(r) * fact(n-r));
    // cout<<comb;
    return comb;
}
void pascal(int r)
{
     int i,j;
     for(i=0;i<r;i++)
     {
        int k=1,ran=0;
        for(j=0;j<(r*2)-1;j++)
        {
              if(j>=r-i-1 && j<r+i && k)
                {
                  cout<<combination(i,ran);
                   k=0;
                   ran++;
                }
               else
               {
                cout<<" ";
                k=1;
               }
             
        }
        cout<<endl;
     }
}
