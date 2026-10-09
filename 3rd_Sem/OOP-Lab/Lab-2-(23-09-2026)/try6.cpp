#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Write a c++ program & overload area () function. The area () func will calculate area of rectangle , square, triangle ,circle  etc .

void area(int h, int w)
{
    cout << "Area of Rectangle : " << h * w << endl;
}

void area(int s)
{
    cout << "Area of Square : " << s * s << endl;
}

void area(float c, int u, int b)
{
    cout << "Area of Triangle : " << c * u * b << endl;
}

void area(float r)
{
    cout << "Area of circle : " << 3.1416 * r * r << endl;
}

int main()
{

    int h, w;

    cout << " Enter  Height for Rectangle : ";
    cin >> h;
    cout << " Enter  width for Rectangle : ";
    cin >> w;

    area(h, w);

    int s;

    cout << " Enter  1 side for Square : ";
    cin >> s;

    area(s);

    int u, b;

    cout << " Enter  Height for Triangle : ";
    cin >> u;
    cout << " Enter  base for Triangle : ";
    cin >> b;

    area(0.5, u, b);

    float r;

    cout << " Enter  radius for circle (enter in float): ";
    cin >> r;

    area(r);

    return 0;
}