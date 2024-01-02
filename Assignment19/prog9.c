/* 9. Write a program that asks the user to enter a username. If the username entered is
one of the names in the list then the user is allowed to calculate the factorial of a
number. Otherwise, an error message is displayed */
#include<stdio.h>
 #include<stdio.h>
 int compare_str(char str[], char str1[])
{
   int i;
   for (i = 0; str[i]!=0||str1[i]!=0; i++)
   {
      if (str[i] != str1[i])
      {
           return(str[i]-str1[i]);
      }
     
   }
    return 0;
}
int main()
{
    int i,c,fact,flag=0;
    char str[10][20]={"Aman","Rajesh","Prabhjot","Tushar","Ganesh","Arun","Guri","Sonu","Sumit","Jagsir"};
    char name[20];
    printf("Enter the username");
    fgets(name,20,stdin);
     name[strcspn(name,"\n")]=0;

    for(i=0;i<10;i++)
    {
           c=compare_str(name,str[i]);
           if(c==0)
           {
              flag=1;
             break;
           }
    }
    if(flag==1)
    {
        int num;
        fact=1;
        printf("Enter the number for caluclating factorial\n");
        scanf("%d",&num);
        for(i=num;i>=1;i--)
        {
            fact=fact*i;
        }
        printf("factorial of %d is %d\n",num,fact);
    }
    else
       printf("Error\n");
}