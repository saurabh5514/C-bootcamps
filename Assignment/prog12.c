// write program to take a three digit number from the user and rotate the digits by one position towards the right 
#include <stdio.h>

int main() {
    
    int num, originalNum, rotatedNum;

    // Input a three-digit number from the user
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    // Validate if the entered number is a three-digit number
    if (num < 100 || num > 999) {
        printf("Please enter a valid three-digit number.\n");
        return 1; // Exit with an error code
    }

    // Save the original number
    originalNum = num;

    // Rotate the digits towards the right
    int lastDigit = num % 10;
    num = num / 10; // Remove the last digit
    num = lastDigit * 100 + num; // Rotate the last digit to the front

    // Display the original and rotated numbers
    printf("Original Number: %d\n", originalNum);
    printf("Rotated Number: %d\n", num);

    return 0;
}
