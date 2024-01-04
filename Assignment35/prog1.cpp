#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Adding integers
    int intResult = add(5, 10);
    std::cout << "Integer Result: " << intResult << std::endl;

    // Adding floating-point numbers
    double doubleResult = add(3.14, 2.71);
    std::cout << "Double Result: " << doubleResult << std::endl;

    // Adding characters
    char charResult = add('A', 1);
    std::cout << "Char Result: " << charResult << std::endl;

    // Adding strings
    std::string strResult = add(std::string("Hello, "), std::string("world!"));
    std::cout << "String Result: " << strResult << std::endl;

    return 0;
}
