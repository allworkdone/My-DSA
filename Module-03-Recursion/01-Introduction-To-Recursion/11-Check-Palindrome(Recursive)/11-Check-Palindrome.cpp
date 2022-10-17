#include <iostream>
using namespace std;

#include <bits/stdc++.h>
bool temp(char a[], int start, int end)
{
    // Base Case: Check if the size is greater than equal to end if yes then return true
    if (start >= end)
        return true;

    // Small work: Here we check if the first and last index value is same or not if yes then store true and go for recursive call
    if (a[start] != a[end])
        return false;

    // Recursive call: here we pass array by increasing start and decreasing the end value
    return temp(a, start + 1, end - 1);
}

bool checkPalindrome(char input[])
{
    // Here we made another function so the start and end value doesn't get messed while we do recursive call
    return temp(input, 0, strlen(input) - 1);
}

int main()
{
    char input[50];
    cin >> input;

    if (checkPalindrome(input))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
