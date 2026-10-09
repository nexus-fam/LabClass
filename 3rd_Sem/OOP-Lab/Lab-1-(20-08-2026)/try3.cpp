#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// population count of a number

int main()
{
    // count

    {
        int num;
        cin >> num;
        int cnt = 0;

        for (int i = 0; num != 0; i++)
        {
            int p = num & 1;
            cnt = cnt + p;
            num = num >> 1;
        }

        cout << " Population : " << cnt << endl;
    }
    // how many changes
    {
        int num1, num2;
        cin >> num1 >> num2;
        int num3 = num1 ^ num2;
        int cnt = 0;

        for (int i = 0; num3 != 0; i++)
        {
            int p = num3 & 1;
            cnt = cnt + p;
            num3 = num3 >> 1;
        }

        cout << " how many changes : " << cnt << endl;
    }

    return 0;
}