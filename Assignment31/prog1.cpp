#include <iostream>
#include<cstring>
using namespace std;
class Person
{
    char name[100];
    int age;
    public:
    void setName(const char *str)
    {
        strcpy(name,str);
    }
    void setAge(int a)
    {
        age = a;
    }
    void getName()
    {
        cout<<"Name => "<<name<<endl;
    }
    void getAge()
    {
        cout<<"Age => "<<age<<endl;
    }
};
class Employee : public Person
{
     int empid,salary;
     public:
     void setEmpid(int id)
     {
         empid = id;
     }
     void setSalary(int s)
     {
         salary = s;
     }
     void getEmpid()
     {
         cout<<"Emp id => "<<empid<<endl;
     }
     void getSalary()
     {
         cout<<"Salary => "<<salary<<endl;
     }
};
int main()
{
    Employee e1;
    e1.setName("Prabhjot Singh");
    e1.setAge(18);
    e1.setEmpid(1);
    e1.setSalary(500);
    e1.getName();
    e1.getAge();
    e1.getEmpid();
    e1.getSalary();

    return 0;
}