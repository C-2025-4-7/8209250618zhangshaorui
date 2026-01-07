#include <iostream>
using namespace std;

int main() {
    const int TOTAL_INPUT = 10;  
    double input_num; 
    double unique_nums[TOTAL_INPUT]; 
    int unique_count = 0; 

    cout << "请输入10个数字（以空格/回车分隔）：" << endl;
    for (int i = 0; i < TOTAL_INPUT; i++) {
        cin >> input_num;

        
        bool is_duplicate = false;
        for (int j = 0; j < unique_count; j++) {
            if (input_num == unique_nums[j]) {
                is_duplicate = true;
                break; 
            }
        }
        if (!is_duplicate) {
            unique_nums[unique_count] = input_num;
            unique_count++;
        }
    }

    cout << "其中不同的数为：" << endl;
    for (int i = 0; i < unique_count; i++) {
        cout << unique_nums[i] << " ";
    }
    cout << endl;

    return 0;
}