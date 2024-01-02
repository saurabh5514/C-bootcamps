// Write a program to check whether a given number is there in the Fibonacci series or not.

#include <stdio.h>
#include <math.h>

// Function to check if a number is a perfect square
int isPerfectSquare(int x) {
    int s = sqrt(x);
    return (s * s == x);
}

// Function to check if a number is a Fibonacci number
int isFibonacci(int n) {
    // A number is Fibonacci if and only if one of (5 * n^2 + 4) or (5 * n^2 - 4) is a perfect square
    return isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4);
}

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is Fibonacci or not
    if (isFibonacci(num)) {
        printf("%d is a Fibonacci number.\n", num);
    } else {
        printf("%d is not a Fibonacci number.\n", num);
    }

    return 0;
}


