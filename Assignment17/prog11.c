#include<stdio.h>
int main()
{
    char str1[20]="prabhjot",str2[20];
    copystr(str2,str1);
    printf("%s",str2);
}
void copystr(char ws[],char st[])
{
    int i;
    for(i=0;st[i];i++)
      {    
        ws[i]=st[i];
      }
    ws[i]='\0';
}