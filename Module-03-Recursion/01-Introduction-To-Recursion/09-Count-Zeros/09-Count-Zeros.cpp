#include <iostream>
using namespace std;

int countZeros(int n)
{
    // Base Case : Check if the given number is smaller than 9 or not if yes then return 1 else 0;
    if (n <= 9)
    {
        if (n == 0)
            return 1;
        else
            return 0;
    }

    // Small Work: If the above condition doesn't matches then it goes here and seperate the digit
    int last = n % 10;
    int count = 0; // Here we initialize a counter which will count the number of 0
    if (last == 0)
    {
        count = 1;
    }

    // Recursive call : calling the function recursively while adding the count and removing one digit in each recursive call
    return count + countZeros(n / 10);
}

int main()
{
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}