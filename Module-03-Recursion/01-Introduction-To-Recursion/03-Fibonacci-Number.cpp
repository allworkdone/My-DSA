#include <iostream>
using namespace std;

int fib(int n)
{
    //Base Case
    if (n == 0)
    {
        return 0;
    }

    //Base Case
    if (n == 1)
    {
        return 1;
    }

    //Function Calling Recursively while calculating the fibonacchi number
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int num;
    cin >> num;
    cout << fib(num) << endl;
}