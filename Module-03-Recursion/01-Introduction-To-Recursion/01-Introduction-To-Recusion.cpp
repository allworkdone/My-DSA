#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 0) // Base call recursive function must have a terminating	condition at which the function will stop calling itself.Such a condition is known as a base case
    {
        return 1;
    }
    int small = factorial(n - 1); // Recursive call with smaller calculation
    return n * small;
}

int main()
{
    int n;
    cin >> n;
    int output = factorial(n);
    cout << output << endl;
}