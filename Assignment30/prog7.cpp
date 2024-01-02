
#include <iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter user name => ";
    cin>>str;
    try
    {
        int flag = 0,i,dig=0,sym = 0;
        for( i = 0;str[i];i++)
        {
             if(str[i]>= 'A' && str[i]<='Z' || str[i]>='a'&&str[i]<='z')
             {
                 flag = 1;
             }
             else if(!(str[i]>= 'A' && str[i]<='Z' || str[i]>='a'&&str[i]<='z' || str[i]==' ' || str[i]>=48 && str[i]<=57))
             {
                 sym = 1;
             }
             else if(str[i]>=48 && str[i]<=57)
             {
                 dig = 1;
             }
        }
        if(i>7)
           throw "Please enter valid username";
        else if(flag == 1 && dig == 1 && sym == 1)
           throw 1;
        else
          throw "Please enter valid username";
    }      
    catch(int z)
    {    
       cout<<"Correct Username"<<endl;
    }
    catch(char const *str)
    {
        cout<<str<<endl;
    }
    return 0;
     
}