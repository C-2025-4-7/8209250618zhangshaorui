#include <iostream>
using namespace std;
class Cuboid {
private:
    double length;
    double width;
    double height;

public:
    void inputDimensions() {
        cout << "请输入长方柱的长、宽、高（需为正数）：" << endl;
        do {
            cin >> length >> width >> height;
            if (length <= 0 || width <= 0 || height <= 0) {
                cout << "输入错误！长、宽、高必须为正数，请重新输入：" << endl;
            }
        } while (length <= 0 || width <= 0 || height <= 0);
    }
    double calculateVolume() {
        return length * width * height;
    }
    void outputVolume(int index) {
        cout << "第" << index << "个长方柱的体积为：" << calculateVolume() << endl;
    }
};

int main() {
    // 定义3个长方柱对象
    Cuboid cuboid1, cuboid2, cuboid3;

    // 输入第1个长方柱的尺寸
    cout << "===== 输入第1个长方柱的尺寸 =====" << endl;
    cuboid1.inputDimensions();

    // 输入第2个长方柱的尺寸
    cout << "\n===== 输入第2个长方柱的尺寸 =====" << endl;
    cuboid2.inputDimensions();

    // 输入第3个长方柱的尺寸
    cout << "\n===== 输入第3个长方柱的尺寸 =====" << endl;
    cuboid3.inputDimensions();

    // 输出3个长方柱的体积
    cout << "\n===== 长方柱体积计算结果 =====" << endl;
    cuboid1.outputVolume(1);
    cuboid2.outputVolume(2);
    cuboid3.outputVolume(3);

    return 0;
}