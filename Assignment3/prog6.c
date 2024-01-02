//greater between two numbers,print one number if both are the same.
#include<Stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the two numbers");
    scanf("%d %d",&num1,&num2);
    
    if(num1>num2){
        printf("%d is greater\n",num1);
    }
    else if(num2>num1){
        printf("%d is greater\n",num2);
    }
    else {
        printf("%d is greater\n",num1);
    }

    return 0;
}