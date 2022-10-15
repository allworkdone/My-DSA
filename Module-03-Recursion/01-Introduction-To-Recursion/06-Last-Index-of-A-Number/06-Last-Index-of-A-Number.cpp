int temp(int input[], int size, int x, int size1)
{
    // Base Case
    if (size == 0)
    {
        return -1;
    }

    // Recursive Call
    int remain = temp(input + 1, size - 1, x, size1);

    // Small Calculation
    if (input[0] == x)
    {
        return size1 - size;
    }

    return remain;
}

int lastIndex(int input[], int size, int x)
{
    // Calling Function while initializing size1 of this function with size so that it doesn't get modified while doing recursion
    return temp(input, size, x, size);
}
