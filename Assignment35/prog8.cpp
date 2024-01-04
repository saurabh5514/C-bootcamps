#include <iostream>
#include <vector>
#include <stdexcept>

template <typename T>
class Stack {
public:
    void push(const T& element) {
        data.push_back(element);
    }

    void pop() {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty. Cannot pop.");
        }
        data.pop_back();
    }

    T top() const {
        if (isEmpty()) {
            throw std::out_of_range("Stack is empty. Cannot get top element.");
        }
        return data.back();
    }

    bool isEmpty() const {
        return data.empty();
    }

private:
    std::vector<T> data;
};

int main() {
    // Test with integers
    Stack<int> intStack;

    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    std::cout << "Top element: " << intStack.top() << std::endl;

    intStack.pop();
    std::cout << "After pop, top element: " << intStack.top() << std::endl;

    // Test with doubles
    Stack<double> doubleStack;

    doubleStack.push(3.14);
    doubleStack.push(2.71);

    std::cout << "Top element: " << doubleStack.top() << std::endl;

    doubleStack.pop();
    std::cout << "After pop, top element: " << doubleStack.top() << std::endl;

    return 0;
}
