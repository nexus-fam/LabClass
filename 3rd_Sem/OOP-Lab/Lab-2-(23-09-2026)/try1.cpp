#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Print n to 1 using recursive func

void print(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << n << endl;
    print(n - 1);
}

int main()
{

    int n;
    cout << "Input N : ";
    cin >> n;

    print(n);

    return 0;
}