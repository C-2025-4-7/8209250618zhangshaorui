#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double a, b;
	cout << "请输入华氏摄氏度" << endl;
	cin >> a;

	b = a - 275.00;
	cout << fixed << setprecision(2) << a << endl;
	cout << "对应的摄氏度为" << b << endl;
	return 0;
}
