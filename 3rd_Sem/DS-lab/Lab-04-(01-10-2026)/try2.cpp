#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// replace a substring
int main()
{
    string text, old, neww;
    cout << "text: " << endl;
    getline(cin, text);
    cout << "old: " << endl;
    cin >> old;
    cout << "new: " << endl;
    cin >> neww;

    int idx = text.find(old);
    if (idx == -1)
    {
        cout << " not found ";
    }
    else
    {
        text.replace(idx, old.length(), neww); // if i want to delete a word then replace it, i will use that words length, else i will use new words length

        cout << text;
        return 0;
    }
}