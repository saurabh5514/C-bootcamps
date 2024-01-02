// write a program to check whether alphabet is in upper case or lower case 
#include <stdio.h>
#include <ctype.h>

int main() {
    // Declare a variable to store the character
    char ch;

    // Input a character from the user
    printf("Enter an alphabet: ");
    scanf(" %c", &ch); // Note the space before %c to consume any leading whitespace

    // Check whether the character is in uppercase or lowercase
    if (isupper(ch)) {
        printf("%c is an uppercase alphabet.\n", ch);
    } else if (islower(ch)) {
        printf("%c is a lowercase alphabet.\n", ch);
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0; // Exit successfully
}
