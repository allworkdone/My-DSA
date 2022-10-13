#include <iostream>
// #include "Solution.h"
using namespace std;
int power(int x, int n)
{
    // Base Case
    if (n == 0)
    {
        return 1;
    }

    // Function calling Recursively
    int p = power(x, n - 1);

    // Small Calculation
    int output = x * p;

    // Returning output
    return output;
}

int main()
{
    int x, n;
    cin >> x >> n;

    cout << power(x, n) << endl;
}
