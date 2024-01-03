#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("a.txt", std::ios::app); // Open file for appending

    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open the file for appending." << std::endl;
        return 1; // Return an error code
    }

    // Append data to the file
    outputFile << "This is new data appended to the file." << std::endl;

    outputFile.close();

    std::cout << "Data appended successfully." << std::endl;

    return 0;
}
