/*  9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).
*/
#include<iostream>
#include<string.h>
using namespace std;
class mystring
{
     char str[100],temp[100];
     public:
     void setString(const char *str1)
     {
           strcpy(str,str1);
     }
     void showString()
     {
         for(int i = 0;str[i];i++)
            cout<<str[i];
     }
     mystring operator!()
     {
       mystring m;
      
        int i;
         for(i=0;str[i];i++)
         {
             if(str[i]>='a'  && str[i]<='z')
             {
                  
                   m.str[i] = str[i] - 32 ;
                   
             } 
             else 
             {
                   m.str[i] = str[i] + 32 ;
                       
            }
               
         }
        m.str[i]=0;
         return m;
         
     }
};
int main()
{
      mystring m1,m2;
      m1.setString("PraBhu");
       m2 = !m1;
      m2.showString();
}


