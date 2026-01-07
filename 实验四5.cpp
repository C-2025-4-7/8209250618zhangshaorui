#include <iostream>
#include <cstring> 
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 == 0) {
        return 0;
    }

    if (len1 > len2) {
        return -1;
    }

   
    for (int i = 0; i <= len2 - len1; i++) {
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i;
        }
    }

    return -1;
}

int main() {
 
    char s1[101], s2[101];
    cout << "请输入第一个字符串s1（子串）：";
    cin >> s1;
    cout << "请输入第二个字符串s2（主串）：";
    cin >> s2;
    int pos = indexOf(s1, s2);
    if (pos != -1) {
        cout << "s1是s2的子串，起始下标为：" << pos << endl;
    }
    else {
        cout << "s1不是s2的子串" << endl;
    }

    return 0;
}