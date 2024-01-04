#include <iostream>

template <typename T>
T findLargest(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Test with integers
    int int1, int2;
    std::cout << "Enter two integers: ";
    std::cin >> int1 >> int2;
    int intResult = findLargest(int1, int2);
    std::cout << "Largest Integer: " << intResult << std::endl;

    // Test with floating-point numbers
    double double1, double2;
    std::cout << "Enter two floating-point numbers: ";
    std::cin >> double1 >> double2;
    double doubleResult = findLargest(double1, double2);
    std::cout << "Largest Double: " << doubleResult << std::endl;

    return 0;
}
