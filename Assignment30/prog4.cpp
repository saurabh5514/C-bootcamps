
#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter email address => ";
    cin>>str;
    try
    {
        int flag = 0;
        for(int i = 0;str[i];i++)
        {
            if(str[i]=='@')
                flag = 1;
          
        }
        if(flag == 0)
           throw "Please enter correct email";
         else
           throw 1;
    }
    catch(int z)
    {
        
       cout<<"Correct email adress"<<endl;
    }
    catch(char const *str)
    {
        cout<<str<<endl;
    }
    return 0;
     
}