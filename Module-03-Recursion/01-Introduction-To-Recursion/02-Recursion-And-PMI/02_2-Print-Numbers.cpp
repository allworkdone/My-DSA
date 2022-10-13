#include <iostream>
using namespace std;

void print(int n)
{
    int count = 1;
    n--;
    print(n);
    
    count++;
    cout << count << " ";
}

int main()
{
    int n;
    cin >> n;

    print(n);
}
