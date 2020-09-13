#ifndef STUDENT_H_
#define STUDENT_H_

#include "People.h"

namespace zhf
{
    class Student : public People
    {
    private:
        float score;

    public:
        Student(std::string name, int age, float score);
        void say();
    };
} // namespace zhf
#endif