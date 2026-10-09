#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// print 1 to n using recursive func

void print(int n)
{
    if (n < 1)
    {
        return;
    }

    print(n - 1);
    cout << n << endl;
}

int main()
{

    int n;
    cout << "Input N : ";
    cin >> n;

    print(n);

    return 0;
}