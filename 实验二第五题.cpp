#include <iostream>
using namespace std;

int main() {
    char c;
    int letters = 0, spaces = 0, digits = 0, others = 0;

    cout << "请输入一行字符（按回车结束）：";

    while (true) {
        c = cin.get();

        if (c == '\n')
            break;

        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            letters++;
        else if (c == ' ')
            spaces++;
        else if (c >= '0' && c <= '9')
            digits++;
        else
            others++;
    }

    cout << "字母个数：" << letters << endl;
    cout << "空格个数：" << spaces << endl;
    cout << "数字个数：" << digits << endl;
    cout << "其他字符个数：" << others << endl;

    return 0;
}
