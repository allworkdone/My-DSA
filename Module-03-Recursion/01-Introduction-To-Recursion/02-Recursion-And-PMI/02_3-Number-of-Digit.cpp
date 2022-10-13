#include <iostream>
// #include "Solution.h"
using namespace std;

int count(int n)
{
    //Base Case
    if (n == 0)
    {
        return 0;
    }

    //Function calling Recursively while adding +1 to count and return it.
    return count(n / 10) + 1;
}

int main()
{
    int n;
    cin >> n;

    cout << count(n) << endl;
}