#include "Student.h"

using namespace zhf;
using namespace std;

class PeopleTest
{
public:
    void TestPeoplePointer(People *p);
    void TestPeopleReference(People &p);
    void TestStudent(Student s);
};

void PeopleTest::TestPeoplePointer(People *p)
{
    p->say();
}

void PeopleTest::TestPeopleReference(People &p)
{
    p.say();
}

void PeopleTest::TestStudent(Student s)
{
    s.say();
}

int main()
{
    People *p = new Student("zhf", 40, 60.1);

    PeopleTest pt;
    pt.TestPeoplePointer(p);
    pt.TestPeopleReference(*p);
    pt.TestStudent(*(dynamic_cast<Student *>(p)));
    delete p;

    // Name:zhf,Age:40,Score:60.1
    // Name:zhf,Age:40,Score:60.1
    // Name:zhf,Age:40,Score:60.1

    Student pp("zhf1", 39, 70.1);
    pt.TestPeoplePointer(&pp);
    pt.TestPeopleReference(pp);
    pt.TestStudent(pp);

    // Name:zhf1,Age:39,Score:70.1
    // Name:zhf1,Age:39,Score:70.1
    // Name:zhf1,Age:39,Score:70.1

    system("pause");
    return 0;
}