
#include <iostream>
#include<string.h>
using namespace std;
int check_gmail(int x,char str[])
{
    int flag = 0;
    char strgm[20] = "@gmail.com";
    for(int i = x;str[i];i++)
    {
        if(str[i]==strgm[i-x])
        {
            flag = 1;
        }
        else 
        {
            flag = 0;
            return 0;
        }
    }
    if(flag == 1)
        return 1;
    else
       return 0;
}  
int main()
{
    char str[100];
    cout<<"Enter Gmail => ";
    cin>>str;
    try
    {
        int flag,i,len ;
        for(i=0;str[i]!='@';i++);
        flag = check_gmail(i,str);
        len = strlen(str);
        
        if(flag == 1 && len>15)
            throw "Correct gmail";
        else 
           throw 1;
    }      
    catch(int z)
    {    
       cout<<"Incorrect gmail"<<endl;
    }
    catch(char const *str)
    {
        cout<<str<<endl;
    }
    return 0;
     
}