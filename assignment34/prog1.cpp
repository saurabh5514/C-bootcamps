//file will created or not.
#include <iostream>
#include <fstream>
#include <stdexcept>

int main() {
    std::ofstream outputFile("example.txt");

    if (outputFile.is_open()) {
        std::cout << "File created successfully." << std::endl;
        // You can perform additional operations on the file if needed
        outputFile.close();
    } else {
        throw std::runtime_error("Error: Unable to create the file.");
    }

    return 0;
}
