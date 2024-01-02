// write a program to find the greateast among three given number Print number once if the greatest number appears two or three times 
#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Check for the greatest number
    if (num1 > num2 && num1 > num3) {
        // num1 is the greatest
        printf("Greatest number is: %d\n", num1);
    } else if (num2 > num1 && num2 > num3) {
        // num2 is the greatest
        printf("Greatest number is: %d\n", num2);
    } else if (num3 > num1 && num3 > num2) {
        // num3 is the greatest
        printf("Greatest number is: %d\n", num3);
    } else {
        // There are two or more numbers with the same greatest value
        printf("Greatest number is: ");

        if (num1 == num2 && num2 == num3) {
            // All three numbers are equal
            printf("%d (appears three times)\n", num1);
        } else if (num1 == num2) {
            // num1 and num2 are equal
            printf("%d (appears twice)\n", num1);
        } else if (num1 == num3) {
            // num1 and num3 are equal
            printf("%d (appears twice)\n", num1);
        } else if (num2 == num3) {
            // num2 and num3 are equal
            printf("%d (appears twice)\n", num2);
        }
    }

    return 0; // Exit successfully
}
