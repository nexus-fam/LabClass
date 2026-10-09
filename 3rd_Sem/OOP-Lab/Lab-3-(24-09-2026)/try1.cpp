#include <bits/stdc++.h>
using namespace std;

// Single Inheritance

class Animal
{
public:
    Animal()
    {
        cout << "Animal object created" << endl;
    }
    int age;
    string cls;
    float wt;
    void sound()
    {
        cout << "Animal makes sound" << endl;
    }
};

class Dog : public Animal
{
public:
    Dog()
    {
        cout << "Dog object created" << endl;
    }
    string d_owner;
    void bark()
    {
        cout << "A barking dog " << endl;
    }
};

class Cat : public Animal
{
public:
    Cat()
    {
        cout << "Cat object created" << endl;
    }
    string c_name;
    void run()
    {
        cout << "A cat tun fast" << endl;
    }
};

class Duck : public Animal
{
public:
    Duck()
    {
        cout << "Duck object created" << endl;
    }
    string c_color;
    void shape()
    {
        cout << "Duck is small" << endl;
    }
};

class Anaconda : public Animal
{
public:
    Anaconda()
    {
        cout << "Anaconda object created" << endl;
    }
    int size;
    void longly()
    {
        cout << "Anaconda is very long" << endl;
    }
};

int main()
{

    Dog d;
    d.bark();
    cout << endl;

    Cat c;
    c.run();
    cout << endl;

    Duck dk;
    dk.shape();
    cout << endl;

    Anaconda a;
    a.longly();
    cout << endl;

    return 0;
}