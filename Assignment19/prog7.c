// 7. From the list of IP addresses, check whether all ip addresses are valid.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int checkdot(char str[])
{
    int i,dots=0,len;
    char str1[10];
    for(i=0;str[i];i++);
    len = i;
    if(len>15||len<7)
           return 1;

    for(i=0;str[i];i++)
    {
      if(str[i]=='.')
         dots++;
    }
    if(dots>3)
       return 1;

        int j;
for(i=0;str[i]!=0;i++)
{
    int k=0;
       for(j=i;str[j]!='.'&&str[j]!='\0';j++)
       {
           
           str1[k++]=str[j];
           
       }
       str1[k]='\0';
       if(k<1&&k>3)
          return 1;
       else
       {
          int x=atoi(str1);
          
            if(x>255)
               return 1;
            
       }  

          i=j;

}
//  printf("%s",str1);
return 0;
}
int main()
{
   char str[5][100];
   int i,len,flag=0;
   printf("Enter the IP adress\n");
   for(i=0;i<2;i++)
   {
      fgets(str[i],100,stdin);
     str[i][strcspn(str[i],"\n")]='\0';
   }

    for(i=0;i<2;i++)
    {
      flag = checkdot(str[i]);
   
      if(flag==0)
      printf("valid Ip adress \n");
      else
     printf("Invalid Ip address\n");
    }
      
}
// 256.100.100.100