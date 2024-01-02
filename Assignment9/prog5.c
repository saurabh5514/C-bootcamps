/*
  5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
*/
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    switch (x)
    {
    case 1:
        printf("good");
    case 2:
        printf("better");
    case 3:
        printf("best");
    default:
        printf("invalid");
    }
}