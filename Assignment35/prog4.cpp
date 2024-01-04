#include <iostream>

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    // Test with integers
    int int1, int2;
    std::cout << "Enter two integers: ";
    std::cin >> int1 >> int2;

    std::cout << "Before swapping - Integer 1: " << int1 << ", Integer 2: " << int2 << std::endl;

    swapValues(int1, int2);

    std::cout << "After swapping - Integer 1: " << int1 << ", Integer 2: " << int2 << std::endl;

    // Test with floating-point numbers
    double double1, double2;
    std::cout << "Enter two floating-point numbers: ";
    std::cin >> double1 >> double2;

    std::cout << "Before swapping - Double 1: " << double1 << ", Double 2: " << double2 << std::endl;

    swapValues(double1, double2);

    std::cout << "After swapping - Double 1: " << double1 << ", Double 2: " << double2 << std::endl;

    return 0;
}
