#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;

class Employee
{
       int empNo;
       char name[100];
       public:
       void setEmpNo(int x)
       {
            empNo = x;
       }
       void setName(const char *str)
       {
           strcpy(name,str);
       }
       void getEmpNo()
       {
           cout<<"Employee No : "<<empNo<<endl;
       }
       void getEmpName()
       {
          cout<<"Employee Name : "<<name;
       }
};
class Fulltime : public Employee
{
      int dailyRate,NumOfDay,Sal;
      public:
      void setDailyRate(int x)   
      {
           dailyRate = x;
      }
      void setNoofDays(int x)
      {
          NumOfDay = x;
          setSalary();
      }
      void setSalary()
      {
          Sal = dailyRate * NumOfDay;
      }
      void getDailyRate()
      {
           cout<<"Daily Rate = "<<dailyRate<<endl;
      }
      void getNoofDays()
      {
            cout<<"Number of Days = "<<NumOfDay<<endl;
      }
      void getSalary()
      {
            cout<<"Salary = "<<Sal<<endl;
      }
      void getStatus()
      {
           cout<<"Status = Full time";
      }
};
class Parttime : public Employee
{
      int NoOfHours,hourRate,salary;
      public:
      void SetNoOfHours(int x)
      {
          NoOfHours = x;
      }
      void SethourRate(int x)
      {
           hourRate = x;
           SetSalary();
      }
      void SetSalary()
      {
           salary = NoOfHours * hourRate;
      }
      void getHourlyRate()
      {
           cout<<"Hour Rate = "<<hourRate<<endl;
      }
      void getNoOfHours()
      {
           cout<<"Number of Hours = "<<NoOfHours<<endl;
      }
      void getSalary()
      {
           cout<<"Salary = "<<salary<<endl;
      }
       void getStatus()
      {
           cout<<"Status = Part time"<<endl;
      }
};

int main()
{
      int f,x,t,choice;
      char str[100];
      Fulltime f1[100];
      Parttime t1[100];
      while(1)
      {
         cout<<"Press 1. for Enter the detail of full time employee"<<endl;
         cout<<"Press 2. for Enter the detail of Part time employee"<<endl;
         cout<<"Press 3. For Printing the detail of full time employee"<<endl;
         cout<<"Press 4. For Printing the detail of Part time employee"<<endl;
         cout<<"Enter choice : ";
         cin>>choice;
         
         switch(choice)
         {
             case 1:
                  cout<<"How many employee which are on full time work : ";
                  cin>>f;
                  f1[f];
                  for(int i = 0;i<f;i++)
                  {
                       cout<<"--------------------------------"<<endl;
                       cout<<"Enter the detail of Employee : "<<endl;
                       cout<<"--------------------------------"<<endl;
                       cout<<"Enter Employee No : ";
                       cin>>x;
                       f1[i].setEmpNo(x);
                       cout<<"Enter Employee Name: ";
                       fflush(stdin);
                       fgets(str,100,stdin);
                       f1[i].setName(str);
                       cout<<"Enter daily Rate : ";
                       cin>>x;
                       f1[i].setDailyRate(x);
                       cout<<"Enter No of days : ";
                       cin>>x;
                       f1[i].setNoofDays(x);
                       cout<<"--------------------------------"<<endl;

                       
                  }
                  break;
            case 2:
                   cout<<"How many employee which are on Part time work : ";
                   cin>>t;
                   t1[t];
                    for(int i = 0;i<t;i++)
                    {
                       cout<<"--------------------------------"<<endl;
                       cout<<"Enter the detail of Employee : "<<endl;
                       cout<<"--------------------------------"<<endl;
                       cout<<"Enter Employee No : ";
                       cin>>x;
                       t1[i].setEmpNo(x);
                       cout<<"Enter Employee Name: ";
                       fflush(stdin);
                       fgets(str,100,stdin);
                       t1[i].setName(str);

                       cout<<"Enter No of Hours : ";
                       cin>>x;
                       t1[i].SetNoOfHours(x);
                       cout<<"Enter Rate of Hours : ";
                       cin>>x;
                       t1[i].SethourRate(x);

                    }
                    break;
            case 3:
                   for(int i = 0;i<f;i++)
                   {
                         cout<<"-----------------------------"<<endl;
                         cout<<"Detail of Full time Employee "<<endl;
                         f1[i].getEmpNo();
                         f1[i].getEmpName();
                         f1[i].getDailyRate();
                         f1[i].getNoofDays();
                         f1[i].getSalary();
                         f1[i].getStatus();
                         cout<<endl;
                         cout<<"-----------------------------"<<endl;
                         
                   }
                   break;
            case 4:
                    for(int i = 0;i<t;i++)
                   {
                         cout<<"-----------------------------"<<endl;
                         cout<<"Detail of Full time Employee "<<endl;
                         t1[i].getEmpNo();
                         t1[i].getEmpName();
                         t1[i].getHourlyRate();
                         t1[i].getNoOfHours();
                         t1[i].getSalary();
                         t1[i].getStatus();
                         cout<<endl;
                         cout<<"-----------------------------"<<endl;
                         
                   }    
                   break; 
                   
            case 5: 
                    exit(0);
            default:
                  cout<<"Valid Input"<<endl;
                  
                  
       }
    }   


}
