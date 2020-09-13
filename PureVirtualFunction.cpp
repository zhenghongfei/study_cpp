#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
    void BaseFunc();
    virtual void PureVirtual() = 0;
};

void Base::BaseFunc()
{
    cout << "Base Normal Func" << endl;
}

void Base::PureVirtual()
{
    cout << "Base Pure Virtual Function" << endl;
}

class Sub : public Base
{
    void PureVirtual()
    {
        BaseFunc();
        Base::PureVirtual();
        cout << "Sub Pure Virtual Function" << endl;
    }
};

// int main()
// {
//     Base *base = new Sub();
//     base->PureVirtual();
//     delete base;

//     // Base Normal Func
//     // Base Pure Virtual Function
//     // Sub Pure Virtual Function

//     system("pause");
//     return 0;
// }