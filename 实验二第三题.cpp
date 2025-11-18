#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "请输入三角形的三条边：";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        double zhouchang = a + b + c;
        cout << "可以构成三角形。" << endl;
        cout << "周长为：" << zhouchang << endl;

        if (a == b || a == c || b == c) {
            cout << "该三角形是等腰三角形。" << endl;
        }
        else {
            cout << "该三角形不是等腰三角形。" << endl;
        }

    }
    else {
        cout << "不能构成三角形！" << endl;
    }

    return 0;
}
