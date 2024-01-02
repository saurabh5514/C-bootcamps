
#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter Pincode Number => ";
    cin>>str;
    try
    {
        int flag = 0,i;
        for( i = 0;str[i];i++)
        {}
        if(i != 6)
           throw "Please enter valid Pincode";
         else
           throw 1;
    }
    catch(int z)
    {
        
       cout<<"Correct Pincode Number"<<endl;
    }
    catch(char const *str)
    {
        cout<<str<<endl;
    }
    return 0;
     
}