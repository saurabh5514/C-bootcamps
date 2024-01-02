// 10. Write a program in C to Find the Frequency of Characters.
#include<stdio.h>
int main()
{
   char str[50]="Prabhjot";
   int i,temp,strlen;
    for( i=0;str[i];i++);
     strlen=i;

   for(i=0;i<strlen-1;i++)
   {
    temp=0;
     for(int j=i+1;j<strlen;j++)
     {  
       if(str[i]>str[j])
        {
          temp=str[i];
          str[i]=str[j];
          str[j]=temp;
            
        }
     }
   }
   int count;
   for(i=0;i<strlen-1;i+=count)
    {
      count=1;
     for(int j=i+1;j<strlen;j++)
     {  
       if(str[i]==str[j])
        {
          count++;
        }
     }
     printf("%c = %d times\n",str[i],count);
    }
}