#include "People.h"

namespace zhf
{
    using namespace std;
    
    People::People(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    string People::GetName()
    {
        return this->name;
    }

    int People::GetAge()
    {
        return this->age;
    }
} // namespace zhf