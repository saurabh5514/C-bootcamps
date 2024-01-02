// 7. Write a recursive function to calculate HCF of two numbers

#include<Stdio.h>
int hcf(int,int);
int main()
{
   int a,b,max,min,s;
   printf("Enter the numbers");
   scanf("%d%d",&a,&b);
   if(a<b)
   {
      max=b;
      min=a;
   }
   else{
      max=a;
      min=b;
   }
    s = hcf(max,min);
   printf("HCF is %d \n",s);
           
}
int hcf(int max,int min)
{
         if(min==0)
            return max;
    return(hcf(min,max%min));
 
}