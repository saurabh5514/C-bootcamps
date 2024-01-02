#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Person
{
    char name[100],address[100],phone_no[10];
    public:
     void setName(const char str[])
     {
         strcpy(name,str);
     } 
     void setAdress(const char str[])
     {
         strcpy(address,str);
     }
     void setPhoneNo(const char str[])
     {
          strcpy(phone_no,str);
     }
     void getName()
     {
           cout<<"Name : "<<name<<endl;
     }
     void getAddress()
     {
           cout<<"Adress : "<<address<<endl;
     }
     void getPhone_no()
     {
           cout<<"Phone No : "<<phone_no<<endl;
     }
};
class Employee : public Person
{
       int eno;
       char ename[100];
       public:
        void setEmployeNo(int x)
        {
             eno = x;
        }
        void getEno()
        {
             cout<<"Employee No : "<<eno<<endl;
        }

};
class Manager : public Employee
{
      char des[100],dep_name[100];
      int basic_sal;
      public:
      void setDes(const char *str)
      {
         strcpy(des,str);
      }
      void setDepName(const char *str)
      {
         strcpy(dep_name,str);
      }
      void setBasSal(int x)
      {
          basic_sal = x;
      }
      void getDesignation()
      {
          cout<<"Designation : "<<des<<endl;
      }
      void getDepName()
      {
          cout<<"Department Name : "<<dep_name<<endl;
      }
      void getBasicSal()
      {
          cout<<"Basic salary : "<<basic_sal<<endl;
      }
};
int main()
{
    int n,sal,eno,choice;
    char str[100];
    int highsal[100],maxsal;
     cout<<"Enter No of managers"<<endl;
      cin>>n;
    Manager m[n];
    while(1)
    {
            cout<<"<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
            cout<<"Press 1 . For Enter the details of Managers"<<endl;
            cout<<"Press 2 . Display manager having highest Salary"<<endl;
            cout<<"Press 3.  For exit"<<endl;
            cout<<"<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
            cout<<"Enter choice : ";
            cin>>choice;
            switch(choice)
            {
                case 1:
                       
                        for(int i = 0;i<n;i++)
                        {
                            fflush(stdin);
                            cout<<"Enter Detail of Employee"<<endl;
                            cout<<"------------------------"<<endl;
                            cout<<"Enter Employee No :";
                            cin>>eno;
                            m[i].setEmployeNo(eno);
                            cout<<"Enter Name : ";
                            fflush(stdin);
                            fgets(str,100,stdin);
                            m[i].setName(str);
                            cout<<"Enter Address : ";
                            fflush(stdin);
                            fgets(str,100,stdin);
                            m[i].setAdress(str);
                            cout<<"Enter Phone no : ";
                            fflush(stdin);
                            fgets(str,100,stdin);
                            m[i].setPhoneNo(str);
                            cout<<"Designation : ";
                            fflush(stdin);
                            fgets(str,100,stdin);
                            m[i].setDes(str);
                            cout<<"Enter Department Name : ";
                            fflush(stdin);
                            fgets(str,100,stdin);
                            m[i].setDepName(str);
                            cout<<"Enter Basic Salary : ";
                            cin>>sal;
                            highsal[i] = sal;
                            m[i].setBasSal(sal);
                            

                        }
                        break;
                case 2: 
                          maxsal = highsal[0];
                         int loc;
                        for(int i = 0;i<n;i++)
                        {
                              if(maxsal < highsal[i])
                              {
                                  maxsal = highsal[i];
                                  loc = i;
                              }
                        }
                        cout<<"Manager With Highest Salary is "<<maxsal;
                        cout<<"And, Manager "; m[loc].getName();
                         break;
                case 3: 
                     exit(0);
                default:
                     cout<<"Enter valid input"<<endl;
                    
            }
    }
    
   
}