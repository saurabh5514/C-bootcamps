#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Customer
{
      char name[100],phoneNo[11];
      public:
      void setName(const char *str)
      {
            strcpy(name,str);
      }
      void setPhoneNo(const char *str)
      {
            strcpy(phoneNo,str);
      }
      void getName()
      { 
            cout<<"Customer Name   :  "<<name;
      }
      void getPhoneNo()
      {
           cout<<"Customer Phone No : "<<phoneNo;
      }
};
class Depositor : public Customer
{
       char accNo[100],balance[100];
       public:
       void setAccNO(const char *str)
       {
            strcpy(accNo,str);
       }
       void setBalance(const char *str)
       {
            strcpy(balance,str);
       }
       void getAccNo()
       {
           cout<<"Customer A/c No : "<<accNo;
       }
       void getBalance()
       {
           cout<<"Balance : "<<balance;
       }

};
class Borrower : public Depositor
{
        int loanNo;
        char loanAmt[100];
        public:
        void setLoanNo(int l)
        {
              loanNo = l;
        }
        void setLoanAmt(const char *str)
        {
              strcpy(loanAmt,str);
        }
        void getLoanNo()
        {
              cout<<"Loan No : "<<loanNo<<endl;
        }
        void getLoanAmt()
        {
            cout<<"Loan Amount : "<<loanAmt<<endl;
        }
};
int main()
{
     int n,x;
     char str[100];
     cout<<"Enter the detail of N customers"<<endl;
     cin>>n;
     Borrower b1[n];
     for(int i = 0;i<n;i++)
     {
          cout<<"---------------------------------------"<<endl;
          cout<<"Enter the detail of Customer"<<endl;
          cout<<"Enter Customer Name : ";
          fflush(stdin);
          fgets(str,100,stdin);
          b1[i].setName(str);
          cout<<"Enter Customer Phone No : ";
          fflush(stdin);
          fgets(str,100,stdin);
          b1[i].setPhoneNo(str);
          cout<<"Enter Customer A/C NO : ";
          fflush(stdin);
          fgets(str,100,stdin);
          b1[i].setAccNO(str);
          cout<<"Enter Balance : ";
          fflush(stdin);
          fgets(str,100,stdin);
          b1[i].setBalance(str);
          cout<<"Enter Loan No : ";
          cin>>x;
          b1[i].setLoanNo(x);
          cout<<"Enter Loan Amount : ";
          fflush(stdin);
          fgets(str,100,stdin);
          b1[i].setLoanAmt(str);
          cout<<"---------------------------------------"<<endl;
     }
     for(int i = 0;i < n;i++)
     {
          cout<<"Details of Customers"<<endl;
          cout<<"---------------------------------------"<<endl;
          b1[i].getName();
          b1[i].getPhoneNo();
          b1[i].getAccNo();
          b1[i].getBalance();
          cout<<"---------------------------------------"<<endl;
          b1[i].getLoanNo();
          b1[i].getLoanAmt();
          cout<<"---------------------------------------"<<endl;

     }
     return 0;
}