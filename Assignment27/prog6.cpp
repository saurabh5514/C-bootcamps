/* 6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings. */
#include<iostream>
#include<string.h>
using namespace std;
class CString
{
     private:
        char str[100],str2[200];
     public:
       void setStringA(const char *str5)
       {
              strcpy(str,str5);
            
       }
       
       CString operator+(CString s)
       { 
           CString temp;
           int i,j;
           for(i = 0;str[i];i++)
           {
              temp.str2[i] = str[i];
           }  
           for( j = 0;s.str[j];j++)
           {
              temp.str2[i + j] = s.str[j];
           }
           return temp;
        
       }
       void showstring()
       {
           cout<<str2;
       }
};
int main()
{
     CString c1,c2,c3;
     c1.setStringA("Hello");
     c2.setStringA("World");
     
     c3 =  c1 + c2;
      c3.showstring();

     
}