#include <iostream>
using namespace std;

// divide / multiply an int by power of 2

int main()
{

    // right shift  mani 2 dara vag /
    // left shift  mani 2 dara gun *

    int num, power_of_2;

    cin >> num >> power_of_2;
    int mul = num;

    while (power_of_2 != 1)
    {
        power_of_2 = power_of_2 / 2;

        mul = mul << 1;
    }

    cout << mul << endl;

    cout << "Num : " << (num << 3) << endl;

    int num2, div;
    cin >> num2 >> div;

    cout << "Num : " << (num2 >> div) << endl;

    return 0;
}