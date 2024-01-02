
#include <iostream>
using namespace std;
int main()
{
    try
    {
        int x = 0;
        if(x == 1)
           throw 1;
        else
           throw "string";
    }
    catch(int x)
    {
        
       cout<<"Exception Caught"<<endl;
    }
    catch(char const *str)
    {
        cout<<str<<endl;
    }
    return 0;
     
}