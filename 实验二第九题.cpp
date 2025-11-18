#include <iostream>
using namespace std;
int main() {
    const double PRICE = 0.8; 
    int day = 1;
    int count = 2; 
    int total_count = 2; 
    while (true) {
        int next_count = count * 2;
        if (total_count + next_count > 100) {
            break;
        }
        count = next_count;
        total_count += count;
        day++;
    }
    double total_cost = total_count * PRICE;
    double avg_cost = total_cost / day;
    cout << "总购买数量：" << total_count << endl;
    cout << "总天数：" << day << endl;
    cout << "每天平均花费：" << avg_cost << "元" << endl;
    return 0;
}