// 5. Define a function to check whether a given number is a term in a Fibonacci series or not.
#include <iostream>
using namespace std;
int fibonacci(int);

int main()
{
    int result, n;
    cout << "Enter the number";
    cin >> n;
    result = fibonacci(n);
    if (result == 1)
        cout << "it is available in fibonacci series" << endl;
    else
        cout << "it is not available in fibonacci series" << endl;
}
int fibonacci(int n)
{
    int i, a = 0, b = 1, c;
    for (i = 0;; i++)
    {
        c = a + b;
        a = b;
        b = c;
        if (n == c)
            return 1;
        else if (c > n)
            return 0;
    }
}
