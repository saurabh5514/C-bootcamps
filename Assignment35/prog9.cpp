#include <iostream>

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Test with integers
    int intResult = add(5, 10);
    std::cout << "Sum of Integers: " << intResult << std::endl;

    // Test with floating-point numbers
    double doubleResult = add(3.14, 2.71);
    std::cout << "Sum of Doubles: " << doubleResult << std::endl;

    // Test with characters (ASCII addition)
    char charResult = add('A', 1);
    std::cout << "Character Result: " << charResult << std::endl;

    return 0;
}
