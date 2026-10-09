#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// calculate factorial of n with recur func

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }

    return n * fact(n - 1);
}

int main()
{

    int n;
    cout << "Input N : ";
    cin >> n;

    cout << fact(n);

    return 0;
}