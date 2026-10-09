#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// erase a sub string
int main()
{
    string text, old;
    cout << "text: " << endl;
    getline(cin, text);
    cout << "old: " << endl;
    cin >> old;

    int idx = text.find(old);
    if (idx == -1)
    {
        cout << " not found ";
    }
    else
    {
        text.erase(idx, old.length()); // if i want to delete a word then replace it, i will use that words length, else i will use new words length

        cout << text;
        return 0;
    }
}