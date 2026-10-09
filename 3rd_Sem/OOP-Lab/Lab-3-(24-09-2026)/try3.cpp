#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define PI 3.1416

// create a c++ program that will overload volumn() function to calculate volumn of Cube , cone , sphere , cylinder etc.

void volumn(int cube)
{
    cout << "volumn of cube : " << cube * cube * cube << endl;
}

void volumn(float c1, double pi, int r1, int h1)
{
    cout << "volumn of cone : " << c1 * pi * r1 * r1 * h1 << endl;
}

void volumn(float c2, double pi, int r2)
{
    cout << "volumn of sphere : " << c2 * pi * r2 * r2 * r2 << endl;
}

void volumn(float pi, int r3, int h2)
{
    cout << "volumn of cylinder : " << pi * r3 * r3 * h2 << endl;
}

int main()
{
    // cube
    int cube = 10;

    volumn(cube);

    // cone

    float c1 = 0.333;
    int r1 = 5;
    int h1 = 4;

    volumn(c1, PI, r1, h1);

    // sphere

    float c2 = 1.333;
    int r2 = 10;
    volumn(c2, PI, r2);

    // cylinder

    int r3 = 10;
    int h2 = 5;

    volumn(PI, r3, h2);

    return 0;
}