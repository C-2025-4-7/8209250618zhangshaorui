#include <iostream>
using namespace std;

// 定义坐标点类Point
class Point {
private:
    // 私有数据成员：x、y坐标
    int x;
    int y;

public:
    // 构造函数：初始化坐标为(60,80)
    // 这里使用默认参数，也可以写成无参构造函数直接赋值
    Point() {
        x = 60;
        y = 80;
        cout << "Point对象已创建，初始坐标：(" << x << ", " << y << ")" << endl;
    }

    // 公有成员函数：修改坐标值为(60+i, 80+j)
    void setPoint(int i, int j) {
        x = 60 + i;   // 原x=60，修改为60+i
        y = 80 + j;   // 原y=80，修改为80+j
    }

    // 公有成员函数：输出当前坐标值
    void display() {
        cout << "当前坐标值：(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // 1. 定义Point对象，调用构造函数初始化坐标为(60,80)
    Point p;

    // 2. 调用setPoint修改坐标，示例：传入i=10, j=20，预期坐标变为(70,100)
    p.setPoint(10, 20);

    // 3. 调用display输出修改后的坐标
    p.display();

    // 可选：再测试一组参数，验证功能稳定性
    cout << "\n----- 再次修改坐标 -----" << endl;
    p.setPoint(-20, 10);  // 预期坐标变为(40,90)
    p.display();

    return 0;
}