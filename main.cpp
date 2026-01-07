// main.cpp 主函数模块
#include "student.h"  // 包含类声明的头文件
using namespace std;
int main()
{
    Student stud;     // 定义stud对象
    // 调用set_value给stud赋初值
    stud.set_value(7, "tcg", 'm');
    // 显示stud的信息
    stud.display();

    // 再定义一个对象测试
    Student stud1;
    stud1.set_value(101, "zhangsan", 'f');
    stud1.display();

    return 0;
}