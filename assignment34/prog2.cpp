#include <iostream>
#include <fstream>

int main() {
    std::ifstream inputFile("example.txt");

    if (!inputFile.is_open()) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return 1; // Return an error code
    }

    char ch;
    int characterCount = 0;

    while (inputFile.get(ch)) {
        characterCount++;
    }

    inputFile.close();

    std::cout << "Number of characters in the file: " << characterCount << std::endl;

    return 0;
}
