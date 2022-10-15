#include <iostream>
using namespace std;

int multiplyNumbers(int m, int n)
{
    // Base Case
    if (n == 0)
        return 0;

    // Function calling Recursively while adding the number to itself and reducing n
    return m + multiplyNumbers(m, n - 1);
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}
