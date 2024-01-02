/* 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks and phy_marks and then display the percentage
of each student.*/
#include<stdio.h>
struct marks 
{
    int rollno;
    char name[100];
    float chem_marks,math_marks,phy_marks;
};
struct marks input()
{
    struct marks m;
    printf("Enter the roll no \n");
    scanf("%d",&m.rollno);
    fflush(stdin);
    printf("Enter the name\n");
    fgets(m.name,100,stdin);
    fflush(stdin);
    printf("Enter the marks of chemistry, Physics and Mathematics\n");
    scanf("%f%f%f",&m.chem_marks,&m.phy_marks,&m.math_marks);
    return m;
}
void display(struct marks m)
{
    int total=0;
    printf("Name = %s \n Roll no =  %d \n",m.name,m.rollno);
    printf("Chemistry = %.2fd\n",m.chem_marks);
    printf("Physics = %.2f \n",m.phy_marks);
    printf("Mathematics = %.2f\n",m.phy_marks);
    total = m.chem_marks + m.math_marks + m.phy_marks;
    float per = 0;
    per = total/3;
    printf("Percentage of student is %.2f\n",per);
}
int main()
{
    int i;
    struct marks m1[2];
    for(i=0;i<2;i++)
      m1[i]=input();
    for(i=0;i<2;i++)
      display(m1[i]);
}
