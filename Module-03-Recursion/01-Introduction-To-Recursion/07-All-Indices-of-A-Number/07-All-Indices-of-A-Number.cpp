#include <iostream>
using namespace std;

int allIndexes(int input[], int size, int x, int output[])
{
    // Base case
    if (size == 0)
    {
        return 0;
    }
    // Recursive call
    int smallcalculation = allIndexes(input, size - 1, x, output);

    // Processing
    if (input[size - 1] == x)
    {
        output[smallcalculation] = size - 1;
        return smallcalculation + 1;
    }
    else
    {
        return smallcalculation;
    }
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

    int x;

    cin >> x;

    int *output = new int[n];

    int size = allIndexes(input, n, x, output);
    for (int i = 0; i < size; i++)
    {
        cout << output[i] << " ";
    }

    delete[] input;

    delete[] output;
}
