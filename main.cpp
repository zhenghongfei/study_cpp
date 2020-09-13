#include <iostream>
#include "Student.h"

void TestCppStudent()
{
    using namespace zhf;
    People *stu = new Student("zhf", 40, 60.1f);
    stu->say();
    delete stu;
    // Name:zhf,Age:40,Score:60.1
}

// int main()
// {
//     TestCppStudent();

//     system("pause");
//     return 0;
// }