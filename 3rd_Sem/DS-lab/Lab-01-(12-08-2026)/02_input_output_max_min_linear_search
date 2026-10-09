#include <iostream> // # include <bits/stdc++.h>

using namespace std;

// Array input , output  , max , min , linear search

int main()
{
    cout << "enter array size : ";

    int n;
    cin >> n;

    cout << "enter target : ";
    int target;
    cin >> target;
    int tar_pos = -1;

    int arr1[n];

    // input

    cout << "Input elements : ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // output

    int max = arr1[0];
    int max_pos = 0;
    int min = arr1[0];
    int min_pos = 0;

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
        if (max < arr1[i])
        {
            max = arr1[i];
            max_pos = i;
        }
        if (min > arr1[i])
        {
            min = arr1[i];
            min_pos = i;
        }
        if (arr1[i] == target)
        {

            tar_pos = i;
        }
    }
    cout << endl
         << endl;
    cout << "maximum =  " << max << " in index : " << max_pos << " position : " << max_pos + 1 << endl;
    cout << "minimum =  " << min << " in index : " << min_pos << " position : " << min_pos + 1 << endl;

    if (target != -1)
    {
        cout << " Target " << target << " in index : " << tar_pos << " position no : " << tar_pos + 1 << endl;
    }
    return 0;
}
