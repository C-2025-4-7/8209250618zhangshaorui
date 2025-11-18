#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    double a, x0, x1;
    cout << "输入a的值：";
    cin >> a;
    if (a < 0) {
        cout << "a不能为负数" << endl;
        return 1;
    }
    x0 = a / 2.0;
    do {
        x1 = 0.5 * (x0 + a / x0);
        if (fabs(x1 - x0) < 1e-6) {
            break;
        }
        x0 = x1;
    } while (true);
    cout << a << "的平方根为：" << x1 << endl;
    return 0;
}