#include <iostream>
using namespace std;

int main() {
    int peach = 1; 
    for (int day = 9; day >= 1; day--) {
        peach = (peach + 1) * 2;
    }
    cout << "猴子第一天共摘了：" << peach << " 个桃子" << endl;
    return 0;
}