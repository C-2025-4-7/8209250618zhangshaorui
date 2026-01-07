//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include"Student.h"//不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value(int n, const char* na, char s)
{
    num = n;  // 给学号赋值
    // 字符串拷贝：将na指向的字符串复制到name数组中（避免直接赋值数组）
    int i = 0;
    while (na[i] != '\0' && i < 19) {  // 限制长度，防止数组越界
        name[i] = na[i];
        i++;
    }
    name[i] = '\0';  // 手动添加字符串结束符
    sex = s;         // 给性别赋值
}