#include <bits/stdc++.h>

using namespace std;

// bubble sort

void bs(int *arr, int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i; j < n; j++)
        {

            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
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

    int str = 0;
    int end = n - 1;

    bs(arr1, n);

    cout << "sorted array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << "  ";
    }

    return 0;
}
