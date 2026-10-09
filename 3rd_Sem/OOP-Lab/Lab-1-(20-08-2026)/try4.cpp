#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// set , clear toggle a bit

int main()
{

    // set

    {
        int num, pos;
        cout << "input for set" << endl;
        cin >> num >> pos;
        bitset<8> b1(num);
        cout << "Old bit " << (b1.to_ulong()) << " :" << b1 << endl;

        int n = num | (1 << pos - 1);
        bitset<8> b2(n);
        cout << "New bit (set) " << (b2.to_ulong()) << " : " << b2 << endl;
    }

    // clear
    {
        int num, pos;
        cout << "input for clear" << endl;
        cin >> num >> pos;
        bitset<8> b1(num);
        cout << "Old bit of " << (b1.to_ulong()) << " : " << b1 << endl;

        int n = num & (~(1 << pos - 1));
        bitset<8> b2(n);
        cout << "New bit (clear) " << (b2.to_ulong()) << " : " << b2 << endl;
    }

    // flip
    {
        int num, pos;
        cout << "input for flip" << endl;
        cin >> num >> pos;
        bitset<8> b1(num);
        cout << "Old bit of " << (b1.to_ulong()) << " : " << b1 << endl;

        int n = num ^ (1 << pos - 1);
        bitset<8> b2(n);
        cout << "New bit (flip) " << (b2.to_ulong()) << " : " << b2 << endl;
    }

    return 0;
}