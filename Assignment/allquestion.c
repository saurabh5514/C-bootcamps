#include <stdio.h>

int main()
{
//1st program print hello on screen
 printf("Hello");
 printf("\n");
//2nd program print hello in first line and students in second line
 printf("Hello\n");
 printf("Students");
 printf("\n");
 //3rd program print MySirG on the screen
 printf("\"iNeuron\"");
 printf("\n");
//  4th program area of circle
 printf("\n");
 float area,radius;
 printf("Enter the radius of circle\n");
 scanf("%f",&radius);
 area=3.14*radius*radius;
 printf("Area of circle is %f having the radius %f",area,radius);
 printf("\n");
// 5th program length of string
 printf("\n");
 int length=printf("ineuron");
 printf("\nlength 0f string is %d",length);
 printf("\n");
//  6th program  print user name in double ""quotes
 printf("\"Hello, Amit kumar\" ");
 printf("\n");
// 7th program print %d on screen
  printf("%%d");
  printf("\n");
// 8th program print \n on screen
  printf("\\n");
  printf("\n");
// 9th program print \\ on screen
  printf("\"\\\\\"");
  printf("\n");
//10th program  print dob of user
  int date,month,year;
  printf("Enter date of birth date month and year\n");
  scanf("%d%d%d",&date,&month,&year);
  printf("Day-%d,Month-%d,year-%d",date,month,year);
  printf("\n");
//11th program print hours and minutes
  int hour,min;
  printf("Enter Hours and Minutes\n");
  scanf("%d%d",&hour,&min);
  printf("%d Hours and %d Minutes",hour,min);
  printf("\n"); 
//12th program length of ineuron
  printf("Length of ineuron is 7");
  return 0;
}