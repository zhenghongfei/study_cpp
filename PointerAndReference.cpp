#include <iostream>
#include <string>

void TestPointAndReference()
{
    /** 指针和引用的例子 **/
    std::string s1 = "luobo";
    std::string s2 = "qingcai";
    std::string s3 = "jidan";
    std::string s4 = "xihongshi";

    std::cout << "Origin var value:" << std::endl;
    std::cout << "s1:" << s1 << std::endl; /** luobo **/
    std::cout << "s2:" << s2 << std::endl; /** qingcai **/
    std::cout << "s3:" << s3 << std::endl; /** jidan **/
    std::cout << "s4:" << s4 << std::endl; /** xihongshi **/

    /** 指针可以初始化为空 **/
    std::string *p_Str = NULL;

    /** 引用一开始必须初始化 **/
    std::string &r_Str = s1;

    p_Str = &s2;

    std::cout << "Pointer:" << *p_Str << std::endl; /** 青菜 **/
    std::cout << "Refernce:" << r_Str << std::endl; /** 萝卜 **/
    std::cout << std::endl;

    /** 分别修改指针和引用 **/
    r_Str = s3;  /** 试图让r_Str为s3的别名 **/
    p_Str = &s4; /** p_Str重新指向了s4 **/

    std::cout << "Pointer:" << *p_Str << std::endl; /** 西红柿 **/
    std::cout << "Refernce:" << r_Str << std::endl; /** 鸡蛋 **/
    std::cout << std::endl;

    /** 貌似成功了，都按照意图修改了，但是，稍等 **/
    std::cout << "After Modify var value:" << std::endl;
    std::cout << "s1:" << s1 << std::endl; /** 鸡蛋 ！！！注意 ！！！  **/
    std::cout << "s2:" << s2 << std::endl; /** 青菜 **/
    std::cout << "s3:" << s3 << std::endl; /** 鸡蛋 **/
    std::cout << "s4:" << s4 << std::endl; /** 西红柿 **/

    /** 				
    发现s1 "萝卜"  被变成了和s3一样的"青菜"，这也说明了任何对引用的操作都等同于操作原先的变量本身				
    相比较之下，指针就自由度很高了，想指向谁就指向谁，并不会影响任何之前指向过的变量				
    惊不惊喜，意不意外 :)				
    **/
}

// int main()
// {
//     TestPointAndReference();
//     system("pause");
//     return 0;
// }