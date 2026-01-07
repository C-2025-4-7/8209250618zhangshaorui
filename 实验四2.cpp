#include <iostream>
#include <iomanip>  // 用于格式化输出（可选）
using namespace std;

// 起泡排序函数：对双精度数组进行升序排序
void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;  // 初始化为未交换
        // 遍历数组，比较相邻元素
        for (int j = 0; j < listSize - 1; j++) {
            // 前一个元素 > 后一个元素，交换（升序）
            if (list[j] > list[j + 1]) {
                // 交换相邻元素
                double temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
                changed = true;  // 标记发生了交换
            }
        }
    } while (changed);  // 只要有交换，就继续下一趟
}

// 测试程序：读取10个双精度数，排序后输出
int main() {
    const int SIZE = 10;
    double nums[SIZE];

    // 提示用户输入10个双精度数字
    cout << "请输入10个双精度数字（以空格/回车分隔）：" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> nums[i];
    }

    // 调用起泡排序函数
    bubbleSort(nums, SIZE);

    // 输出排序后的结果
    cout << "\n排序后的数字（升序）：" << endl;
    for (int i = 0; i < SIZE; i++) {
        // 保留2位小数输出，增强可读性（可选）
        cout << fixed << setprecision(2) << nums[i] << " ";
    }
    cout << endl;

    return 0;
}