
#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter Nick name => ";
    fgets(str,100,stdin);
    try
    {
        int flag = 0,i,dig=0;
        for( i = 0;str[i];i++)
        {
             if(str[i] == ' ')
                dig = 1;
             if(str[i]>= 'A' && str[i]<='Z' || str[i]>='a'&&str[i]<='z')
             {
                 flag = 1;
             }
             else
               dig = 1;
        }
        if(i>8 || dig == 1)
           throw "Please enter valid nick name";
        else
          throw 1;
    }      
    catch(int z)
    {    
       cout<<"Correct Nickname"<<endl;
    }
    catch(char const *str)
    {
        cout<<str<<endl;
    }
    return 0;
     
}