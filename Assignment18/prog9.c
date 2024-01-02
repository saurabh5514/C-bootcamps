// /*   9. Write a function to reverse a string word wise.(For example if the given string is
//       “Mysirg Education Services” then the resulting string should be “Services Education
//         Mysirg”)      */
#include<stdio.h>
void reverseword(char str[],int s,int e,char revws[])
{
    int i,j=e-1;
    char temp;
 
  for(i=s;i<e;i++)
   {
      if(i<j)
       {
          temp = str[i];
          str[i]= str[j];
          str[j]=temp;
          j--;
       }
   }
//    printf("%s",str);
     for(i=s;i<=e;i++)
     {
        str[e]=' ';
        revws[i]=str[i];  
     }
   
    
}
int main()
{
    int i,st=0,en,len,len2,j;
    char str[100];

    char rev[100];
     fgets(str,100,stdin);
     str[strcspn(str,"\n")]=0;
    for(i=0;str[i];i++);
      len = i;
    //   printf("%d",len);
    for(i=st;i<=len;i++)
    {
            
          if(str[i]==' '||i==len)
          {
              en = i;
            reverseword(str,st,en,rev);
              st=en+1;
          }
    }
    
    for(i=0;str[i];i++)
       len2=i;
    for(i=len2;i>=0;i--)
        printf("%c",str[i]);

    printf("\n");
 }