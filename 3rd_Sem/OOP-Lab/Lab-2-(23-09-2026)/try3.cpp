#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// print a given string n th times using recursion

void print(int n, string s)
{
    if (n < 1)
    {
        return;
    }
    cout << s << endl;
    print(n - 1, s);
}

int main()
{

    int n;
    cout << "Input N : ";
    cin >> n;
    string s;
    cout << "Enter string : ";
    cin >> s;

    print(n, s);

    return 0;
}