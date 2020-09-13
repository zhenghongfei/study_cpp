#include <iostream>
using namespace std;

void ReferenceFunction(int &a)
{
    int bb = 2;
    a = bb;
    cout << "Reference Call  Test:" << &a << " " << a << endl;
}

void TestReferenceFunction()
{
    int aa = 1;
    int &a = aa;
    cout << "Reference Befoe Test:" << &a << " " << a << endl;
    ReferenceFunction(a);
    cout << "Reference After Test:" << &a << " " << a << endl;
}

void PointerFunction(int *a)
{
    int bb = 2;
    a = &bb;
    cout << "Pointer Call  Test:" << a << " " << *a << endl;
}

void TestPointerFunction()
{
    int aa = 1;
    int *a = &aa;
    cout << "Pointer Befoe Test:" << a << " " << *a << endl;
    PointerFunction(a);
    cout << "Pointer After Test:" << a << " " << *a << endl;
}

void PointerFunction2(int *a)
{
    *a = 2;
    cout << "Pointer2 Call  Test:" << a << " " << *a << endl;
}

void TestPointerFunction2()
{
    int aa = 1;
    int *a = &aa;
    cout << "Pointer2 Befoe Test:" << a << " " << *a << endl;
    PointerFunction2(a);
    cout << "Pointer2 After Test:" << a << " " << *a << endl;
}

// int main()
// {
//     TestReferenceFunction();
//     // Reference Befoe Test:0x22fe1c 1
//     // Reference Call  Test:0x22fe1c 2
//     // Reference After Test:0x22fe1c 2

//     TestPointerFunction();
//     // Pointer Befoe Test:0x22fe14 1
//     // Pointer Call  Test:0x22fddc 2
//     // Pointer After Test:0x22fe14 1

//     TestPointerFunction2();
//     // Pointer2 Befoe Test:0x22fe14 1
//     // Pointer2 Call  Test:0x22fe14 2
//     // Pointer2 After Test:0x22fe14 2

//     system("pause");
//     return 0;
// }