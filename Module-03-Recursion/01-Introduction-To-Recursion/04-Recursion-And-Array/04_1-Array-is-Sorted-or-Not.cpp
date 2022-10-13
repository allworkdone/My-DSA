#include <iostream>
using namespace std;

bool is_sorted(int a[], int size)
{
    // Base Case
    if (size == 0 || size == 1)
    {
        return true;
    }

    // Check for the array is sorted or not
    if (a[0] > a[1])
    {
        return false;
    }

    // Function calling Recursively
    return is_sorted(a + 1, size - 1);
}

int main()
{
    int n;
    cout << "Input the size of array: ";
    cin >> n;
    int *a = new int[n];

    cout << "Input for the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (is_sorted(a, n))
    {
        cout << "The given array is sorted";
    }
    else
    {
        cout << "The given array is not sorted";
    }
    delete[] a;
}