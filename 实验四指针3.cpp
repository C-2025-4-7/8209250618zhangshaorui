#include <iostream>
using namespace std;

// 数组升序排序函数（起泡排序，指针版）
void sortArray(int* arr, int size) {
    if (arr == nullptr || size <= 1) {
        return; // 空数组或单元素数组无需排序
    }

    cout << "\n===== 排序过程调试 =====" << endl;
    bool changed;
    do {
        changed = false;
        // 用指针遍历数组（替代下标j）
        int* p = arr; // 指向当前元素
        for (int j = 0; j < size - 1; j++, p++) {
            cout << "比较指针地址：" << p << "(" << *p << ") 和 " << p + 1 << "(" << *(p + 1) << ")" << endl;
            if (*p > *(p + 1)) {
                // 交换指针指向的内容
                int temp = *p;
                *p = *(p + 1);
                *(p + 1) = temp;
                changed = true;
                cout << "  → 交换后：" << p << "(" << *p << ")，" << p + 1 << "(" << *(p + 1) << ")" << endl;
            }
        }
    } while (changed);
    cout << "===== 排序完成 =====" << endl;
}

int main() {
    int size;
    // 1. 输入数组元素个数
    cout << "请输入数组元素的个数：";
    cin >> size;
    if (size <= 0) {
        cout << "错误：元素个数必须大于0！" << endl;
        return 1;
    }

    // 2. 动态分配数组内存（new）
    int* arr = new int[size];
    cout << "\n===== 动态数组创建调试 =====" << endl;
    cout << "动态数组首地址：" << arr << endl;

    // 3. 输入数组元素
    cout << "请输入" << size << "个整数（以空格分隔）：";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i); // 指针方式赋值（等价于arr[i]）
        cout << "arr+" << i << " = " << arr + i << "，值 = " << *(arr + i) << endl;
    }

    // 4. 排序前输出（指针方式）
    cout << "\n===== 排序前数组（指针输出） =====" << endl;
    int* p = arr; // 遍历指针
    for (int i = 0; i < size; i++, p++) {
        cout << "指针地址：" << p << "，值 = " << *p << endl;
    }

    // 5. 调用排序函数
    sortArray(arr, size);

    // 6. 排序后输出（指针方式）
    cout << "\n===== 排序后数组（指针输出） =====" << endl;
    p = arr; // 重置指针到数组首地址
    cout << "最终数组元素：";
    for (int i = 0; i < size; i++, p++) {
        cout << *p << " "; // 指针解引用输出值
    }
    cout << endl;

    // 7. 释放动态数组内存（delete[]）
    delete[] arr;
    arr = nullptr; // 避免野指针
    cout << "\n动态数组内存已释放（arr置空：" << arr << "）" << endl;

    return 0;
}