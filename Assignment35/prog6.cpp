#include <iostream>

template <typename T, size_t size>
T arraySum(const T (&arr)[size]) {
    T sum = 0;
    for (size_t i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // Test with integers
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intSize = sizeof(intArray) / sizeof(intArray[0]);
    int intSum = arraySum(intArray);
    std::cout << "Sum of Integers: " << intSum << std::endl;

    // Test with floating-point numbers
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t doubleSize = sizeof(doubleArray) / sizeof(doubleArray[0]);
    double doubleSum = arraySum(doubleArray);
    std::cout << "Sum of Doubles: " << doubleSum << std::endl;

    return 0;
}
