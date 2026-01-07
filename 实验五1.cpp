#include<iostream>
using namespace std;


class Time
{
private:
    int hour;
    int minute;
    int sec;

public:
    void inputTime() {
        cout << "请输入时间（小时 分钟 秒）：" << endl;
        cin >> hour >> minute >> sec;
        if (hour < 0 || hour > 23) hour = 0;
        if (minute < 0 || minute > 59) minute = 0;
        if (sec < 0 || sec > 59) sec = 0;
    }

    void showTime() {
        cout << hour << ":" << minute << ":" << sec << endl;
    }
};

int main()
{
    Time t1;           
    t1.inputTime();    
    t1.showTime();    
    return 0;
}