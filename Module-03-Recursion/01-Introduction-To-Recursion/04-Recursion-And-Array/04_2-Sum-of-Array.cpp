#include <iostream>
using namespace std;

int sum(int input[], int n)
{
    // Base Case
    if (n == 0)
        return 0;

    // Function calling recursively and storing its value in total by adding with total
    int total = input[0] + sum(input + 1, n - 1);
    return total;
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    cout << sum(input, n) << endl;
    delete[] input;
}