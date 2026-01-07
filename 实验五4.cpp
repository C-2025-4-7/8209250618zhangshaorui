#include <iostream>
using namespace std;

// 定义学生类
class Student {
private:
    int id;     // 学号
    int score;  // 成绩

public:
    // 构造函数：初始化学号和成绩（方便给对象数组赋值）
    Student(int i = 0, int s = 0) : id(i), score(s) {}

    // 成员函数：设置学生信息（学号+成绩）
    void setInfo(int i, int s) {
        id = i;
        score = s;
    }

    // 成员函数：获取成绩（供max函数访问私有成绩）
    int getScore() const {
        return score;
    }

    // 成员函数：获取学号（供max函数访问私有学号）
    int getId() const {
        return id;
    }
};

// max函数：接收对象数组的指针和数组长度，找出最高成绩的学生
void max(Student* stuArr, int size) {
    if (size <= 0) {  // 边界校验：防止空数组
        cout << "学生数组为空！" << endl;
        return;
    }

    // 初始化：假设第一个学生是最高分
    Student* pMax = stuArr;  // 指向当前最高分学生的指针
    for (int i = 1; i < size; i++) {
        // 比较当前学生成绩与最高分成绩
        if (stuArr[i].getScore() > pMax->getScore()) {
            pMax = &stuArr[i];  // 更新最高分学生的指针
        }
    }

    // 输出最高成绩学生的信息
    cout << "最高成绩的学生信息：" << endl;
    cout << "学号：" << pMax->getId() << endl;
    cout << "成绩：" << pMax->getScore() << endl;
}

int main() {
    // 1. 创建包含5个学生的对象数组
    Student stuArray[5];

    // 2. 手动输入5个学生的学号和成绩（也可直接初始化，这里用输入更灵活）
    cout << "请输入5个学生的学号和成绩（格式：学号 成绩，每行一个）：" << endl;
    for (int i = 0; i < 5; i++) {
        int id, score;
        cout << "第" << i + 1 << "个学生：";
        cin >> id >> score;
        stuArray[i].setInfo(id, score);
    }

    // 3. 调用max函数：传入对象数组指针（数组名本身就是首元素地址）和长度
    max(stuArray, 5);

    return 0;
}