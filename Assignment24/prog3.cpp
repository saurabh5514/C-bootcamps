// 3. Define a function to calculate x raised to the power y
#include <iostream>
using namespace std;
int power(int x, int pow);

int main()
{
    int x, pow, result;
    cout << "Enter number and power";
    cin >> x >> pow;
    result = power(x, pow);
    cout<< x << " raised to Power " << pow << " is " << result << endl;
}
int power(int x, int pow)
{
    int i, res = 1;
    for (i = 1; i <= pow; i++)
    {
        res = res * x;
    }
    return res;
}
