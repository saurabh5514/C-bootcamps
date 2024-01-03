#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open the first input file for reading
    std::ifstream inputFile1("file1.txt");
    if (!inputFile1.is_open()) {
        std::cerr << "Error: Unable to open file1.txt for reading." << std::endl;
        return 1; // Return an error code
    }

    // Open the second input file for reading
    std::ifstream inputFile2("file2.txt");
    if (!inputFile2.is_open()) {
        std::cerr << "Error: Unable to open file2.txt for reading." << std::endl;
        inputFile1.close(); // Close the first input file
        return 1; // Return an error code
    }

    // Open the output file for writing
    std::ofstream outputFile("merged_file.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open merged_file.txt for writing." << std::endl;
        inputFile1.close(); // Close the first input file
        inputFile2.close(); // Close the second input file
        return 1; // Return an error code
    }

    // Read and write the contents of the first file
    std::string line;
    while (std::getline(inputFile1, line)) {
        outputFile << line << std::endl;
    }

    // Read and write the contents of the second file
    while (std::getline(inputFile2, line)) {
        outputFile << line << std::endl;
    }

    // Close all the files
    inputFile1.close();
    inputFile2.close();
    outputFile.close();

    std::cout << "Files merged successfully." << std::endl;

    return 0;
}
