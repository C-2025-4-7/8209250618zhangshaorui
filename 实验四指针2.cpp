#include <iostream>
#include <cstring>  // 用于strlen
#include <cctype>   // 用于toupper、isdigit
using namespace std;

// 将16进制字符串转换为10进制整数
// hexString：输入的16进制字符串（支持0-9、A-F/a-f）
int parseHex(const char* const hexString) {
    // 边界1：空指针或空字符串，返回0
    if (hexString == nullptr || *hexString == '\0') {
        return 0;
    }

    int decimal = 0;  // 存储最终的10进制结果
    int len = strlen(hexString);  // 获取字符串长度

    // 遍历每个字符，逐位转换
    for (int i = 0; i < len; i++) {
        char ch = toupper(hexString[i]);  // 统一转为大写，方便处理
        int value = 0;

        // 判断字符类型，转换为对应10进制值
        if (isdigit(ch)) {
            // 数字字符：'0'-'9' → 0-9
            value = ch - '0';
        }
        else if (ch >= 'A' && ch <= 'F') {
            // 字母字符：'A'-'F' → 10-15
            value = 10 + (ch - 'A');
        }
        else {
            // 非16进制字符，直接返回0（或忽略，此处选择严格校验）
            cout << "错误：包含非16进制字符 '" << hexString[i] << "'" << endl;
            return 0;
        }

        // 核心计算：逐位累加（左移4位等价于×16，此处用×16更直观）
        decimal = decimal * 16 + value;
    }

    return decimal;
}

// 主函数测试
int main() {
    const int MAX_LEN = 20;  // 限定16进制字符串最大长度
    char hexStr[MAX_LEN];

    // 输入16进制字符串
    cout << "请输入一个16进制字符串（0-9、A-F/a-f）：";
    cin >> hexStr;

    // 调用转换函数
    int decimalNum = parseHex(hexStr);

    // 输出结果
    cout << "16进制字符串 \"" << hexStr << "\" 对应的10进制数为：" << decimalNum << endl;

    // 测试样例验证
    cout << "\n测试样例：parseHex(\"A5\") = " << parseHex("A5") << endl;  // 应输出165
    cout << "测试样例：parseHex(\"10\") = " << parseHex("10") << endl;  // 应输出16
    cout << "测试样例：parseHex(\"FF\") = " << parseHex("FF") << endl;  // 应输出255

    return 0;
}