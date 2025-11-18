#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "请输入一个字符：";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        char upper = ch - ('a' - 'A');
        cout << "转换成大写后为：" << upper << endl;
    }
    else {
        char nextChar = ch + 1;
        cout << "后继字符的ASCII码值为：" << (int)nextChar << endl;
    }

    return 0;
}
