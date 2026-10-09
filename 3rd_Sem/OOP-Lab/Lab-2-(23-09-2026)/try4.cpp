#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Find n th fibo number using recur func

int fib(int n)
{
    if (n <= 1)
    {

        return n;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{

    int n;
    cout << "Input N : ";
    cin >> n;

    cout << fib(n);

    return 0;
}