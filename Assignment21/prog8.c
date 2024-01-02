// 8. Write a program to store information of 10 students and display them using structure.
#include<stdio.h>
struct student
{
    int class,roll_no;
    char name[50];
};
struct student input()
{
    struct student s;
       printf("Enter the class\n");
        scanf("%d", &s.class);
        fflush(stdin);
        printf("Enter your name\n");
        fgets(s.name, 50, stdin);
        s.name[strcspn(s.name,"\n")]='\0';
       
        printf("Enter the Roll no \n");
        scanf("%d", &s.roll_no);
        return s;

}
void printdata(struct student s)
{
    printf(" Name = %s \t Class = %d\t Roll no = %d\n",s.name,s.class,s.roll_no);
}
int main()
{
    int i;
    struct student s[10];
    for(i=0;i<10;i++)
       s[i]=input();
       printf("\n****--------------------Students Data -----------------------******\n");
    for(i=0;i<10;i++)
       printdata(s[i]);
}