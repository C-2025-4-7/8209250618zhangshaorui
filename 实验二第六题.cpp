#include <iostream>
using namespace std;
int gcd(int a, int b) {
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int a, b;

    cout << "请输入两个正整数：";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "错误：请输入正整数！" << endl;
        return 1;
    }

    int g = gcd(a, b);
    int l = lcm(a, b);

    cout << "最大公约数为：" << g << endl;
    cout << "最小公倍数为：" << l << endl;

    return 0;
}
