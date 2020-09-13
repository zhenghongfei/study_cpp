#include <iostream>
using namespace std;

struct Base
{
    virtual void print() { cout << "base!" << endl; }
};

struct Derived : public Base
{
    virtual void print() { cout << "derived!" << endl; }
};

class Derived2 : public Base
{
    virtual void print() { cout << "derived2!" << endl; }
};

struct Derived3 : public Derived2
{
    virtual void print() { cout << "Derived3!" << endl; }
};

// int main()
// {
//     Base *d = new Derived3();
//     d->print();

//     delete d;

//     system("pause");
//     return 0;
// }