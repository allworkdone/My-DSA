#include <iostream>
using namespace std;

int temp(int input[], int size, int x, int size1)
{
    // base case
    if (size == 0)
    {
        return -1;
    }
    // operation [here we checking first then calling will return result from first index]
    if (input[0] == x)
    {
        return size1 - size;
    }
    else
    {
        int remain = temp(input + 1, size - 1, x, size1); // Calling the recursion after checking the condition
        return remain;
    }
}

int firstIndex(int input[], int size, int x)
{
    // Calling temp and sending array"input" and size of array and the number which we have to find. once the recursion returns the result then this function will return it to main function
    return temp(input, size, x, size);
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

    cout << firstIndex(input, n, x) << endl;
}
