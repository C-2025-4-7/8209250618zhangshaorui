#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "请输入表达式（如： 3 + 5）：";
    cin >> a >> op >> b;

    switch (op) {
    case '+':
        cout << "结果：" << a + b << endl;
        break;

    case '-':
        cout << "结果：" << a - b << endl;
        break;

    case '*':
        cout << "结果：" << a * b << endl;
        break;

    case '/':
        if (b == 0) {
            cout << "错误：除数不能为 0！" << endl;
        }
        else {
            cout << "结果：" << a / b << endl;
        }
        break;

    case '%':
        if ((int)b == 0) {
            cout << "错误：除数不能为 0！" << endl;
        }
        else {
            cout << "结果：" << (int)a % (int)b << endl;
        }
        break;

    default:
        cout << "错误：非法运算符！" << endl;
    }

    return 0;
}
