#include <iostream>

template <typename T>
T findLargest(T a, T b, T c) {
    T largest = a;

    if (b > largest) {
        largest = b;
    }

    if (c > largest) {
        largest = c;
    }

    return largest;
}

int main() {
    // Test with integers
    int int1, int2, int3;
    std::cout << "Enter three integers: ";
    std::cin >> int1 >> int2 >> int3;
    int intResult = findLargest(int1, int2, int3);
    std::cout << "Largest Integer: " << intResult << std::endl;

    // Test with floating-point numbers
    double double1, double2, double3;
    std::cout << "Enter three floating-point numbers: ";
    std::cin >> double1 >> double2 >> double3;
    double doubleResult = findLargest(double1, double2, double3);
    std::cout << "Largest Double: " << doubleResult << std::endl;

    return 0;
}
