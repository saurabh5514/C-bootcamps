#include <iostream>

// Non-templated base class
class NonTemplatedClass {
public:
    NonTemplatedClass(int value) : nonTemplateData(value) {}

    void displayNonTemplateData() const {
        std::cout << "Non-templated data: " << nonTemplateData << std::endl;
    }

private:
    int nonTemplateData;
};

// Templated derived class
template <typename T>
class TemplatedDerivedClass : public NonTemplatedClass {
public:
    TemplatedDerivedClass(T value, int nonTemplateValue)
        : NonTemplatedClass(nonTemplateValue), templatedData(value) {}

    void displayTemplatedData() const {
        std::cout << "Templated data: " << templatedData << std::endl;
    }

private:
    T templatedData;
};

int main() {
    // Instantiate the templated derived class with int type
    TemplatedDerivedClass<int> derivedInt(42, 100);
    
    // Display data from both base and derived classes
    derivedInt.displayNonTemplateData();
    derivedInt.displayTemplatedData();

    // Instantiate the templated derived class with double type
    TemplatedDerivedClass<double> derivedDouble(3.14, 200);
    
    // Display data from both base and derived classes
    derivedDouble.displayNonTemplateData();
    derivedDouble.displayTemplatedData();

    return 0;
}
