#include <iostream>
#include "Student.h"

namespace zhf
{
    using namespace std;

    Student::Student(string name, int age, float score) : People(name, age)
    {
        this->score = score;
    }

    void Student::say()
    {
        cout << "Name:" << GetName() << ",Age:" << GetAge() << ",Score:" << score << endl;
    }
} // namespace zhf