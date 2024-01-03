#include <iostream>
#include <fstream>
#include <cctype> // For toupper and tolower functions

int main() {
    std::ifstream inputFile("input.txt");
    std::ofstream outputFile("output.txt");

    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cerr << "Error: Unable to open files." << std::endl;
        return 1; // Return an error code
    }

    char ch;

    while (inputFile.get(ch)) {
        // Check if the character is an alphabet and change its case
        if (std::isalpha(ch)) {
            ch = std::islower(ch) ? std::toupper(ch) : std::tolower(ch);
        }

        // Write the modified character to the output file
        outputFile.put(ch);
    }

    inputFile.close();
    outputFile.close();

    std::cout << "File copied with case changes successfully." << std::endl;

    return 0;
}
