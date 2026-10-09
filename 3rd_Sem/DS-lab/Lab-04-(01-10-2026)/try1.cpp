#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// towerofh recursive
void toH(int n, char src, char aux, char dest)
{

    if (n == 1)
    {
        cout << "move from " << src << " to " << dest << endl;
        return;
    }

    toH(n - 1, src, dest, aux);
    cout << "move from " << src << " to " << dest << endl;
    toH(n - 1, aux, src, dest);
}
int main()
{

    int n;

    cout << "enter number of disk" << endl;
    cin >> n;
    toH(n, 'A', 'B', 'C');
}