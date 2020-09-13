#include <iostream>
using namespace std;

class Base
{
public:
    void NonVirtual()
    {
        cout << "Base NonVirtual called.\n";
    }
    virtual void Virtual()
    {
        cout << "Base Virtual called.\n";
    }
};

class Derived : public Base
{
public:
    void NonVirtual()
    {
        cout << "Derived NonVirtual called.\n";
    }
    void Virtual()
    {
        cout << "Derived Virtual called.\n";
    }
};

// int main()
// {
//     Base b;
//     b.NonVirtual();
//     b.Virtual();

//     // Base NonVirtual called.
//     // Base Virtual called.

//     Derived d;
//     d.NonVirtual();
//     d.Virtual();

//     // Derived NonVirtual called.
//     // Derived Virtual called.

//     Base *bBase = new Base();
//     bBase->NonVirtual();
//     bBase->Virtual();
//     delete bBase;

//     // Base NonVirtual called.
//     // Base Virtual called.

//     Base *bDerived = new Derived();
//     bDerived->NonVirtual();
//     bDerived->Virtual();
//     delete bDerived;

//     // Base NonVirtual called.
//     // Derived Virtual called.

//     system("pause");
// }