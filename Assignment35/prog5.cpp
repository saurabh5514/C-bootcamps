#include <iostream>

template <typename T>
T addNumbers(T a, T b) {
    return a + b;
}

int main() {
    // Test with integers
    int int1, int2;
    std::cout << "Enter two integers: ";
    std::cin >> int1 >> int2;
    int intResult = addNumbers(int1, int2);
    std::cout << "Sum of Integers: " << intResult << std::endl;

    // Test with floating-point numbers
    double double1, double2;
    std::cout << "Enter two floating-point numbers: ";
    std::cin >> double1 >> double2;
    double doubleResult = addNumbers(double1, double2);
    std::cout << "Sum of Doubles: " << doubleResult << std::endl;

    return 0;
}
