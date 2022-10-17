#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

double geometricSum(int k)
{
    // Base Case: Here we first check whether k=0 or not if yes then return 1
    if (k == 0)
        return 1;

    // Small work+Recursive call: Here we did the calculation for 1/2 power k till kis not equal to zero and then added them up then pass for recursion call
    return (1 / pow(2, k)) + geometricSum(k - 1);
}

int main()
{
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;
}
