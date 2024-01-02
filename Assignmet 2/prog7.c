// write a program to check whether the given number is even or odd using bitwise operator 

#include<stdio.h>
#include<conio.h>
int main()
{
    int a,result ;
    a=21;
    result=a&1;
  
    if(result==0)
    {
       printf("the number is even\n");
    }
    else{
      printf("the number is odd\n");
    }
    return 0;
   }