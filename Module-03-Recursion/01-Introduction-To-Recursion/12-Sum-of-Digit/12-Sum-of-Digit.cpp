#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    // Base Case: Here we check if n is equal to 0 or not if yes then return 0
    if (n == 0)
        return 0;

    // Small Work: Then we seperate one digit and save it in rem variable
    int rem = n % 10;

    // Recursive Call: Here we call recursive function while adding rem then returning it to main function after recursive call completes
    return rem + sumOfDigits(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << sumOfDigits(n) << endl;
}
