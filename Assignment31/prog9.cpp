#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Student
{
     int rollNo;
     char name[100];
     public:
     void setRollNo(int i)
     {
          rollNo = i;
     }
     void setName(const char *str)
     {
          strcpy(name,str);
     }
     void getName()
     {
          cout<<"Student Name : "<<name;
     }
     void getRollNo()
     {
         cout<<"Roll No : "<<rollNo<<endl;
     }
     
};
class StudentExam : public Student
{
      int m[6];
      public:
      void setMarks(const int marks[6])
      {
          for(int i = 0;i<6;i++)
          {
              m[i] = marks[i];
          }
      }
      float TotalMarks()
      {
            float total = 0;
            for(int i = 1;i<=6;i++)
               total += m[i];      

            return total;
      }
      void getMarks()
      {
          for(int i = 1;i<=6;i++)
          {
              cout<<"Marks of Subject  "<<i<<" : "<<m[i]<<endl;
          }
      }
      
};
class StudentResult : public StudentExam
{
       float totMark,per;
      public:
      void setPer()
      {
           totMark = TotalMarks();
           per = totMark/60;
      }
      void getPer()
      {
          setPer();
          cout<<"Total Percentage  : "<<per;
      }

};
void acceptDetail(int n,StudentResult obj[])
{
     int r,x;
     char str[100];
     int m[6];
     
     for(int i = 0;i<n;i++ )
     {
         cout<<"---------------------------------------"<<endl;
         cout<<"Enter Roll No : ";
         cin>>r;
         obj[i].setRollNo(r);
         cout<<"Enter Student Name : ";
         fflush(stdin);
         fgets(str,100,stdin);

         obj[i].setName(str);
         for(x = 1;x<=6;x++)
         {
             cout<<"Enter Marks for Subject "<<x<<" : ";
             cin>>m[x];
         }
         obj[i].setMarks(m);


     }
}
void displayDetail(int n , StudentResult s[])
{
      
      for(int i = 0;i<n;i++)
      {
            cout<<"*************** STUDENT DETAILS ****************"<<endl;
            s[i].getRollNo();
            s[i].getName();
            s[i].getMarks();
            cout<<endl;
             cout<<"---------------------------------------------"<<endl;

      }
}
int main()
{
    int n;
    StudentResult s1[n];
    cout<<"Enter the No of student you want ? : ";
    cin>>n;
    acceptDetail(n,s1);
    displayDetail(n,s1);
}
