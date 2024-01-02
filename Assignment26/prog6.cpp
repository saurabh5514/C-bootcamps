// 6. Define a class student and write a program to enter student details using constructor
// and define member function to display all the details.
#include<iostream>
#include<string.h>
using namespace std;
class student
{
     private:
        char name[100];
        int id , c;
     public:
         student(const char *str,int i, int cl)
         {
             strcpy(name,str);
              id = i;
              c = cl;
         }
         void display()
         {
             cout<<"Name = "<<name<<endl;
             cout<<"Class = "<<c<<"th"<<endl;
             cout<<"Id = "<<id<<endl;
         }
         

};
int main()
{
     student s1("Hello",10,6);
     s1.display();
}
