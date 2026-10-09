#include <bits/stdc++.h>

using namespace std;

// binary search

int bs(int *arr, int key, int str, int end)
{

    while (str <= end)
    {
        int mid = str + ((end - str) / 2);
        if (arr[mid] < key)
        {
            str = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{

    int n;
    cout << "enter size : ";
    cin >> n;
    int arr1[n];

    cout << "enter elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int key;
    cout << "enter key : ";
    cin >> key;

    int trg = -1;

    int str = 0;
    int end = n - 1;

    trg = bs(arr1, key, str, end);

    cout << " trg = " << trg << endl;
    return 0;
}
