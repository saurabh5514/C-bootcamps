
#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter Mobile Number => ";
    cin>>str;
    try
    {
        int flag = 0,i;
        for( i = 0;str[i];i++)
        {}
        if(i != 10)
           throw "Please enter valid mobile Number";
         else
           throw 1;
    }
    catch(int z)
    {
        
       cout<<"Correct Mobile Number"<<endl;
    }
    catch(char const *str)
    {
        cout<<str<<endl;
    }
    return 0;
     
}