#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Worker
{
     int code;
     char name[100];
     float salary;
     public:
     void setCode(int c)
     {
          code = c;
     }
     void setName(const char *str)
     {
         strcpy(name,str);
     }
     void setSalary(float x)
     {
         salary = x;
     }
     float retsalary()
     {
         return salary;
     }
     void getCode()
     {
        cout<<"Code : "<<code<<endl;
     }
     void getName()
     {
         cout<<"Name : "<<name;
     }
     void getSalary()
     {
        cout<<"Salary : "<<salary<<endl;
     }
};
class officer
{
      float DA,HRA;
      public:
      void setDA(float s)
      {
           DA = s;
      }
      void setHRA(float x)
      {
          HRA = x;
      }
      void getDa()
      {
         cout<<"DA : "<<DA<<endl;
      }
      void getHra()
      {
         cout<<"HRA : "<<HRA<<endl ;
      }
      int getTotal()
      {
          return (DA + HRA);
      }
};
class Manager:public Worker,public officer
{
     float TA,tlsal;
     public:
     void setTA()
     {
          float x = retsalary();
          cout<<x;
          TA = x /10;
     }
     void setgrossSalary()
     {
          float x = getTotal();
          tlsal = TA + x;
     }
     void getTa()
     {
          setTA();
          cout<<"TA : "<<TA<<endl;
     }
     void getGrossSalary()
     {
         setgrossSalary();
          cout<<"Gross Salary : "<<tlsal;
     }
};
int main()
{
    Manager m1;
    int x;
    float s;
    char str[100];
     
     cout<<"Enter Code : ";
     cin>>x;
     m1.setCode(x);
     cout<<"Enter Name : ";
     fflush(stdin);
     fgets(str,100,stdin);
     m1.setName(str);
     cout<<"Enter Salary : ";
     cin>>s;
     m1.setSalary(s);
     cout<<"Enter DA : ";
     cin>>s;
     m1.setDA(s);
     cout<<"Enter HRA : ";
     cin>>s;
     m1.setHRA(s);

     cout<<"----------------------------------"<<endl;
     cout<<"Manager Information"<<endl;
     cout<<"----------------------------------"<<endl;
     m1.getCode();
     m1.getName();
     m1.getSalary();
     m1.getDa();
     m1.getHra();
     m1.getTa();
     m1.getGrossSalary();
     cout<<endl;
     cout<<"----------------------------------"<<endl;
 
    
}