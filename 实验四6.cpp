#include <iostream>
#include <cstring>  // 用于strlen
#include <cctype>   // 用于isalpha、tolower
using namespace std;

// 统计字符串中每个字母（a-z）的出现次数（不分大小写）
void count(const char s[], int counts[]) {
    // 初始化counts数组为0（避免随机值）
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    // 获取字符串长度，遍历每个字符
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char ch = s[i];
        // 仅处理字母字符
        if (isalpha(ch)) {
            // 转为小写，计算偏移量（a→0，b→1，…，z→25）
            char lower_ch = tolower(ch);
            int index = lower_ch - 'a';
            counts[index]++;  // 对应字母计数+1
        }
    }
}

// 测试程序
int main() {
    const int MAX_LEN = 1000;  // 假定输入字符串最大长度
    char s[MAX_LEN];
    int counts[26];  // 存储a-z的计数

    // 读取输入字符串（支持含空格）
    cout << "请输入一个字符串：";
    cin.getline(s, MAX_LEN);

    // 调用count函数统计字母次数
    count(s, counts);

    // 输出非零的字母及次数
    cout << "字母出现的次数（非零）：" << endl;
    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            char letter = 'a' + i;  // 偏移量转回字母
            cout << letter << ": " << counts[i] << endl;
        }
    }

    return 0;
}