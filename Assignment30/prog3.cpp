
#include <iostream>
using namespace std;
int main()
{
    int x = 5,y = 2;
    
    try
    {
       
        if(y == 0)
           throw "Dividend is not zero";
         else
           throw x/y;
    }
    catch(int z)
    {
        
       cout<<x<<"/"<<y <<" = "<<z<<endl;
    }
    catch(char const *str)
    {
        cout<<str<<endl;
    }
    return 0;
     
}