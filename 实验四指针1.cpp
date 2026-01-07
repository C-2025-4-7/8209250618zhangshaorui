#include <iostream>
#include <cstring>  // 用于strlen（获取C字符串长度）
using namespace std;

// 检查s1是否是s2的子串，返回第一次匹配的下标（失败返回-1）
// s1：子串，s2：主串
int indexof(const char* s1, const char* s2) {
    // 1. 边界处理：s1为空串，默认匹配（返回0）
    if (s1 == nullptr || *s1 == '\0') {
        return 0;
    }
    // 2. 边界处理：s2为空串，且s1非空，匹配失败
    if (s2 == nullptr || *s2 == '\0') {
        return -1;
    }

    // 获取两个字符串的长度
    int len1 = strlen(s1);  // s1的长度（不含'\0'）
    int len2 = strlen(s2);  // s2的长度（不含'\0'）

    // 3. 边界处理：s1长度 > s2长度，不可能匹配
    if (len1 > len2) {
        return -1;
    }

    // 4. 暴力匹配核心逻辑
    // 遍历s2的所有可能起始位置（i最大为 len2 - len1，否则剩余字符不足匹配s1）
    for (int i = 0; i <= len2 - len1; i++) {
        // 假设当前位置匹配，逐一对比字符
        bool isMatch = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                isMatch = false;
                break;  // 有字符不匹配，跳出内层循环
            }
        }
        // 找到匹配，返回起始下标i
        if (isMatch) {
            return i;
        }
    }

    // 5. 遍历完所有位置仍未匹配，返回-1
    return -1;
}

// 测试主程序
int main() {
    const int MAX_LEN = 100;  // 限定字符串最大长度（可调整）
    char s1[MAX_LEN], s2[MAX_LEN];

    // 输入子串s1
    cout << "请输入子串s1：";
    cin >> s1;  // 注：cin读取以空格/回车分隔，若需含空格用cin.getline

    // 输入主串s2
    cout << "请输入主串s2：";
    cin >> s2;

    // 调用indexof函数
    int pos = indexof(s1, s2);

    // 输出结果
    if (pos != -1) {
        cout << "s1是s2的子串，第一次匹配的下标为：" << pos << endl;
    }
    else {
        cout << "s1不是s2的子串" << endl;
    }

    return 0;
}