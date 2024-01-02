// write a program to take the cost price and sellling price of a product from the user Now calculate and print profit or loss percentage
#include<stdio.h>
int main()
{
    int cp,sp,tp,tl;
    float per;
    printf("Enter the cost price of product");
    scanf("%d",&cp);
    printf("Enter the Selling price of product");
    scanf("%d",&sp);
    tp=sp-cp;
    tl=sp-cp;
    per=(tp*100)/cp;
    if(sp>cp)
    {
    printf("Total profit percentage is %f",per);
    }
     else
    {
       
    printf("loss percentage is %f",per);
    }

    return 0;
}