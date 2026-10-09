#include <bits/stdc++.h>
#include <iostream>

using namespace std;

// 1st pattern matching algo , find index

int main()
{
    string text, ptn;
    cout << "text: " << endl;
    getline(cin, text);

    cout << "Pattern : ";
    getline(cin, ptn);

    int s = text.length();
    int r = ptn.length();

    int idx = -1;
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (text[i + j] != ptn[j])
            {
                break;
            }
            if ((j + 1) == r)
            {
                idx = i;
            }
        }
        if (idx != -1)
        {
            break;
        }
    }

    if (idx == -1)
    {
        cout << " not found ";
    }
    else
    {
        cout << idx + 1;
    }

    return 0;
}
