#ifndef PEOPLE_H_
#define PEOPLE_H_

#include <string>

namespace zhf
{
    class People
    {
    private:
        std::string name;
        int age;

    public:
        People(std::string name, int age);
        std::string GetName();
        int GetAge();
        virtual void say() = 0;
    };
} // namespace zhf
#endif